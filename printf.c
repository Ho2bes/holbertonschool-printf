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
	int count_characters = 0;
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
			character++;
			for (count = 0; specifier[count].tools != NULL; count++)
			{
				if (format[character] == *specifier[count].tools)
				{
					count_characters += specifier[count].print(args);
					break;
				}
			}
			if (specifier[count].tools == NULL)
            {
                _putchar('%');
                _putchar(format[character]);
                count_characters += 2;
            }
		}
		else
		{
			_putchar(format[character]);
			count_characters++;
		}
		character++;
	}
	va_end(args);
	return (count_characters);
}
