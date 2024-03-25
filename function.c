#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_char - Prints a character
 * @args: The va_list containing the argument
 * Return: the number of characters printed
 */

int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * print_string - Prints a string
 * @args: The va_list containing the argument
 * Return: the number of characters printed
 */

int print_string(va_list args)
{
	int i = 0;
	char *str;

	str = va_arg(args, char *);

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

/**
 * print_percent - Prints a percentage
 * @args: The va_list containing the argument
 * Return: the number of characters printed
 */

int print_percent(va_list args)
{
	_putchar('%');
		return (1);
}
