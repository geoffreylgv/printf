#include "main.h"

/**
 * on_default - return a format specified if not identified
 * @count: count ptr
 * @format: format ptr
 *
 * Return: void
 */
void on_default(int *count, const char *format)
{
	_putchar('%');
	(*count)++;
	if (*format)
	{
		_putchar(*format);
		(*count)++;
	}
}

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
	int num;

	char *str;

	format++;
	switch (*format)
	{
		case 'c':
			*count += handle_char(args);
			break;
		case 's':
			str = va_arg(args, char *);
			*count += handle_string(str);
			break;
		case '%':
			*count += handle_percent();
			break;
		case 'd':
		case 'i':
			num = va_arg(args, int);
			*count += handle_digit(num);
			break;
		case ' ':
			format++;
			switch (*format)
			{
				case 'c':
					*count += handle_char(args);
					break;
				case 's':
					str = va_arg(args, char *);
					*count += handle_string(str);
					break;
				case 'd':
				case 'i':
					num = va_arg(args, int);
					*count += handle_digit(num);
					break;
				default:
					/*_putchar('%');
					(*count)++;
					if (*format)
					{
						_putchar(*format);
						(*count)++;
					}*/
					on_default(count, format);
					break;
			}
			break;
		default:
			/*_putchar('%');
			(*count)++;
			if (*format)
			{
				_putchar(*format);
				(*count)++;
			}*/
			on_default(count, format);
			break;
	}
	return (format);
}

