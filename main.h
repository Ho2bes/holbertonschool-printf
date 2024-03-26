#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

/**
 * struct format - Format specifier and join print function
 * @tools: The type of the character
 * @print: The associeted function
 */

typedef struct format
{
	char *tools;
	int (*print)(va_list);
} format_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_integer(va_list args);

#endif
