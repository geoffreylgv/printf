#include "main.h"

/**
 * format_navigation - While loop through the arg format va list
 * @format: The format
 * @args: Argument va_list passed
 * @count: Counter, number of char
 *
 * Return: char counter ptr
 */
void format_navigation(const char *format, va_list args, int *count)
{

	format++;
	switch (*format)
	{
		case 'c':
			*count += handle_char(args);
			break;
		case 's':
			*count += handle_string(args);
			break;
		case '%':
			*count += handle_percent();
			break;
		default:
			_putchar(*format);
			(*count)++;
			break;
	}
}

