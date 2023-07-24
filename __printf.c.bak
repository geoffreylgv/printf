#include "main.h"

/**
 * _printf - The standard print formatted of the original c
 * @format: String character, the format string is
 * composed of zero or more directives, see: man 3 printf
 *
 * Return: Count as integer
 */
int _printf(const char *format, ...)
{
	int count;
	va_list args;

	count = 0;

	va_start(args, format);

	if (!format || !format[0])
		return (-1);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				char c = va_arg(args, int);

				count += _putchar(c);
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char *);

				count += handle_string(str);
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
	}
	va_end(args);
	return (count);
}

