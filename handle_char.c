#include "main.h"

/**
 * handle_char - Handles the 'c' format
 * @args: va_list containing the argument for 'c'
 *
 * Return: Number of characters printed
 */
int handle_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
}

