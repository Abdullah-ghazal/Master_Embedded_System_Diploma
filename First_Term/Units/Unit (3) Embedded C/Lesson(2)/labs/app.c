#include "uart.h"

unsigned char string_buffer[100] = "learn-in-depth: Abdullah ghazal";

int main(int argc, char const *argv[])
{
	uart_send_string(string_buffer);
	return 0;
}