# _printf
A custom implementation of the printf function in C.

![beautify-picture](https://github.com/soofyane/printf/assets/52314615/c06b3b96-a7f2-4a76-944e-37dcf05b79e9)

## Description
This project aims to create a custom version of the _printf_ function in C. The _printf function will handle various format specifiers like `%c` for characters, `%s` for strings, `%d` for integers, and `%%` for the `%` character...

## Getting Started
### Prerequisites
- C compiler (e.g., GNU GCC, CLang, etc.)
### Compilation
To compile the project, use this command:
`gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c`
### Usage
Include the header file "main.h" in your C code and call the _printf function with the desired format and arguments:

```
#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * main - Entry point test function
 *
 * Return: Success
 */
int main(void)
{
	int len, len4, len6;

	len = _printf("test\n");

	len6 = _printf("%s\n", NULL);

	len4 = _printf("%s\n");
	printf("%s\n");

	_printf("char:%c, string:%s\n", 't', "test");

	_printf("somthin fake%\n");
	_printf("fake %vinci %\n");
	printf("real %vinci %\n");
	printf("somethn real%\n");

	printf("%d\n", len4);
	printf("%d\n", len);
	printf("%d\n", len6);
	_printf("char : %c\n", 'c');
	_printf("Percent:[%%]\n");
	_printf("Len:[%r]\n", 3);
	printf("Len:[%r]\n", 4);

	_printf("______________END_____________\n");
	return (0);
}
```

## Format Specifiers
The custom _printf function supports the following format specifiers:

- %c: Print a single character.
- %s: Print a string of characters.
- %d: Print an integer decimal base 10.
- %i: Print and integer decimal.
- %%: Print a single '%' character.
- %x: Print in lowercase hexadecimal character.
- %X: Print in uppercase hexadecimal character.
- %b: Print in binary.
- %o: Print in octal.
- %p: Print a pointer in hexadecimal.

> ###  More format specifiers that the original `printf()` handles

![format](https://github.com/soofyane/printf/assets/52314615/53f267e0-7159-46c7-acf1-a84fd324bc92)

## Authors
[Geoffrey Logovi](https://github.com/geoffreylgv) | [Soufyane Halloumi](https://github.com/soofyane)


