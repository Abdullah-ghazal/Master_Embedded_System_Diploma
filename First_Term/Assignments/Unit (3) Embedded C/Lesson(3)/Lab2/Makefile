#@copyRight: Abdullah ghazal

CC= arm-none-eabi-
CFLAGS= -mcpu=cortex-m3 -gdwarf-2
INCS= -I .
LIBS=
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)

As= $(wildcard *.s)
AsOBJ= $(As:.s=.o)
Project_name= Toggle_LED_Cortex_m3

all: $(Project_name).bin
	@echo "============ Build is Done ^_^ ============"

%.o: %.s
	$(CC)as.exe $(CFLAGS) $< -o $@

%.o: %.c
	$(CC)gcc.exe -c  $(INCS) $(CFLAGS) $< -o $@

$(Project_name).elf: $(OBJ) $(AsOBJ)
	$(CC)ld.exe -T Linker_Script.ld $(LIBS) $(OBJ) $(AsOBJ) -o $@ -Map=Map_File.map

$(Project_name).bin: $(Project_name).elf
	$(CC)objcopy.exe -O binary $< $@
	
$(project_name).hex: $(project_name).elf  
	$(CC)objcopy.exe -O  binary $< $@

clean_all:
	rm *.o *.elf *.bin

clean:
	rm *.elf *.bin