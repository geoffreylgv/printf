#include "main.h"

/**
 * _putchar - Write out to the standard output the char c
 * @c: Char Value character to be printed
 *
 * Return: Always success 1 / -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * handle_string - Printing a string
 * @str: The string to print
 *
 * Return: String count to print integer
 */
int handle_string( char *str)
{
	int i = 0;
	if (str == NULL)
	{
		handle_string("No");
		return (i + 2);
	}
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);

}

/**
 * _printf - The standard print formatted of the original c
 * @format: String character, the format string is
 * composed of zero or more directives, see: man 3 printf
 *
 * Return: Count as integer
 */
int _printf(const char *format, ...)
{

	int count = 0;
	va_list args;
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
			/*else if (*format == 'd' || *format == 'i')
				int c*/
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
			count+= _putchar(*format);
			format++;
		}
	}
	return (count);
}

