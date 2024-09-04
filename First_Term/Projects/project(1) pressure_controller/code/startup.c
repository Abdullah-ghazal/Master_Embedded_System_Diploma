 /***********************************************
 * @file           : startup.c       			*
 * @author         : Abdullah ghazal            *
 * @Data           : 3/9/2024                   *
 * ARM Cortex M3   : Stm32f103C6                *
 ************************************************/


// External references to main and memory section boundaries
extern int main();
extern unsigned int S_Text;  // Start of the text (code) section
extern unsigned int E_Text;  // End of the text (code) section
extern unsigned int S_Data;  // Start of the initialized data section
extern unsigned int E_Data;  // End of the initialized data section
extern unsigned int S_Bss;   // Start of the BSS (zero-initialized data) section
extern unsigned int E_Bss;   // End of the BSS (zero-initialized data) section

// Prototype functions for the interrupt handlers and reset
void Default_Handler();
void Reset();

// Weak alias for the interrupt handlers to Default_Handler
void NMI_Handler(void) __attribute__((weak , alias("Default_Handler")));
void H_Fault_Handler(void) __attribute__((weak , alias("Default_Handler")));
void MM_Fault_Handler(void) __attribute__((weak , alias("Default_Handler")));
void Bus_Fault(void) __attribute__((weak , alias("Default_Handler")));
void Usage_Fault_Handler(void) __attribute__((weak , alias("Default_Handler")));

// Define the top of the stack (typically 1KB for ARM Cortex-M)
unsigned int stack_top[256]; // Stack memory, will be placed in the .bss section

// Vector table containing pointers to the stack top and handlers
void (* const vector_arr[])() __attribute__((section(".vectors"))) = {
    (void(*)()) (stack_top + sizeof(stack_top)),  // Initial stack pointer
    &Reset,                                       // Reset handler
    &NMI_Handler,                                 // Non-Maskable Interrupt handler
    &H_Fault_Handler,                             // Hard Fault handler
    &MM_Fault_Handler,                            // Memory Management Fault handler
    &Bus_Fault,                                   // Bus Fault handler
    &Usage_Fault_Handler                          // Usage Fault handler
};

// Default handler for interrupts not explicitly handled
void Default_Handler()
{
    Reset(); // In case of an unexpected interrupt, reset the system
}

// Reset handler, initializes data and BSS sections and calls main()
void Reset()
{
    int i;
    
    // Calculate the size of the data section
    unsigned int size_data = ((unsigned int)&E_Data - (unsigned int)&S_Data);
    
    // Calculate the size of the BSS section
    unsigned int size_bss = ((unsigned int)&E_Bss - (unsigned int)&S_Bss);
    
    // Initialize the data section: copy data from flash (text) to SRAM (data)
    unsigned char * p_src = (unsigned char*)&E_Text;    // Source address (in Flash)
    unsigned char * p_des = (unsigned char*)&S_Data;    // Destination address (in SRAM)
    for (i = 0; i < size_data; ++i)
    {
        *((unsigned char*)p_des++) = *((unsigned char*)p_src++);
    }

    // Zero out the BSS section (which holds static and global variables that are zero-initialized)
    p_des = (unsigned char*)&S_Bss;
    for (i = 0; i < size_bss; ++i)
    {
        *((unsigned char*)p_des++) = (unsigned char)0;
    }

    // Call the main function
    main();
}
