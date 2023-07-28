#include "main.h"

/**
 * format_navigation - While loop through the arg format va list
 * @format: The format
 * @args: Argument va_list passed
 * @count: Counter, number of char
 *
 * Return: char counter ptr
 */
const char *format_navigation(const char *format, va_list args, int *count)
{
	if (*format == 'c')
		*count += handle_char(args);
	else if (*format == 's')
		*count += handle_string(va_arg(args, char *));
	else if (*format == '%')
		*count += handle_percent();
	else if (*format == 'd' || *format == 'i')
		*count += handle_digit(va_arg(args, int));
	else if (*format == 'b')
		*count += handle_binary(args);
	else if (*format == 'o')
		*count += handle_octal(args);
	else if (*format == 'u')
		*count += handle_unsigned_digit(args);
	else if (*format == 'x')
		*count += handle_hex_lower(args);
	else if (*format == 'X')
		*count += handle_hex_upper(args);
	else
	{
		_putchar('%');
		(*count)++;
		if (*format)
		{
			_putchar(*format);
			(*count)++;
		}
	}
	return (format);
}

