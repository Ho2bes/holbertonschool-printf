#ifndef MAIN_H
#define MAIN_H
/**
 * File: main.h
 * Auth: Tifenn GUERIN and Nicolas BRAULT DOMINGO
 * Desc: Header file contaning the structure and protoypes used in printf.c
 */

/** 
 * struct format
 * @tools: The type of the character
 * @print: The associeted function
 */
    typedef struct format
    {
    char *tools;
    int (*print)(va_list);
    } format_t;

    int _printf(const char* format, ...);
    int _putchar(char c);
	int print_char(va_list args);
	int print_string(va_list args);
	int print_percent(va_list args);

#endif
