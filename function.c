#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "_putchar.c"

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
	(void)args;
	_putchar('%');
		return (1);
}

/**
  * print_integer - print an interger
  *@args: The va_list containing the argument
  *Return: the number of charaters printed
  */

int print_integer(va_list args)
{
	int num = va_arg(args, int);
	int reversed_num;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num == 0)
	{
		_putchar('0');
		return (0);
	}
	reversed_num = 0;

	while (num > 0)
	{
		reversed_num = reversed_num * 10 + num % 10;
		num /= 10;
	}
	while (reversed_num > 0)
	{
		_putchar(reversed_num % 10 + '0');
		reversed_num /= 10;
	}
	return (reversed_num);
}
