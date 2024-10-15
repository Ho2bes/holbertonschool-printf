# C - printf function project

A function that produces output according to differents formats and converting specifiers.

**In other words: do printf without printf.**

Project for Holberton School by students learning C programming.
## Table of contents
- Technologies used
- Project overview
- Function description
- About us
- Credits
## Technologies used

The printf function was coded on an Ubuntu 22.04 LTS machine with gcc version 4.8.4.

VIM was used to write the code.


## Project overview
### Compilation:

All files will be compiled with:

> _gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c_


Betty coding style:
All files are written in C and follow the Betty coding style for Holberton School.

### Authorized functions and macros

- write
- malloc
- free
- va_start
- va_end
- va_copy
- va_arg
- _putchar

### Files description
**main.h** -> This file contains the structure and the prototypes.

**function.c** -> This file contains the functions to print strings, characters, integers and decimals.

**printf.c** -> This file contains the main code to print differents formats of character.

**man_3_printf** -> This file contains the manual of printf function.

### Functions prototypes
````
int _printf(const char *format, ...);
````

This function produces output of a format string that specifies how the following arguments are converted for output.
- **int _putchar(char c);***
Writes the character c to standard output
- **int print_char(va_list args);***
This function prints each character of char
- **int print_string(va_list args);***
This function prints characters of a string
- **int print_percent(va_list args);***
This function prints a per cent sign '%'.
- **int print_integer(va_list args);***
This functions prints an integer or a decimal number
## Function description
**int _printf(const char *format, ...)***

This function produces output of a format string that specifies how the following arguments are converted for output.

The format string is composed of:

**Ordinary Characters:** These are regular letters, numbers, or symbols that are just copied exactly as they are to the output without any changes, except for the percentage symbol %.

**Conversion Specifier:** This is special code that tells the program how to handle certain types of information. It's just a letter that comes after the percent sign.

**%** means "no argument is converted",

**%i** means "replace this with an integer",

**%d** means "replace this with a number",

**%c** means “replace this with a single letter”

**%s** means “replace this with a string”.

**Return Value :** When the program is finished printing items, it tells you how many characters it printed.

### Example
````
_printf("Let's try to printf a simple sentence.\n");

Output : Let's try to printf a simple sentence.
````
![**Flowchart of our code**](https://github.com/Ho2bes/boom/blob/main/Flowchart%20printf%202.jpg)

## 🚀 About Us
**T. GUERIN and N. B. DOMINGO** are two students at Holberton School, the best school in the world.


## Credits
Contributors :
T. GUERIN and N. BRAULT DOMINGO

**Thanks you to Houssem and all the staff who inspired us for this project.**
