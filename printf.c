#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
  * _printf - function that produces output according to a format
  * @format: character string to print
  * Return: number of charaters to printed
  */
int _printf(const char *format, ...)
{
	int count = 0;
	int character = 0;
	va_list args;
	format_t specifier[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{NULL, NULL}
	};
	va_start(args, format);
	while (format && format[character])
	{
		if (format[character] == '%')
		{
			count = 0;
			while (count < 5)
			{
				if (format[character + 1] == *specifier[count].tools)
				{
					specifier[count].print(args);
					break;
				}
				count++;
			}
			character++;
		}
		else
		{
			_putchar(format[character]);
		}
		character++;
	}
	va_end(args);
	return (character);
}
