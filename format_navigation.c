#include "main.h"

/**
 * format_navigation - While loop through the arg format va list
 * @format: The format
 * @args: Argument va_list passed
 * @count: Counter, number of char
 *
 * Return: count
 */
int format_navigation(const char *format, va_list args, int count)
{
	if (*format == '%')
	{
		format++;
		if (*format == 'c')
		{
			count += _putchar(va_arg(args, int));
		}
		else if (*format == 's')
		{
			count += handle_string(va_arg(args, char*));
		}
		else if (*format == '%')
		{
			_putchar('%');
			count++;
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	else
	{
		count += _putchar(*format);
		format++;
	}
	return (count);
}

