#include "main.h"

/**
 * navigate_format - navigate and on specific format do action
 * @format: format string
 *
 * struct formattype, key params :
 * (form: data type to convert, func: specific called function) ; see: main.h
 *
 * Return: success
 */
int (*navigate_format(char *format))(char *format, va_list)
{
	/* struct formattype */
	formattype ftypes[];

	ftypes[] = {{"%c", print_char}, {"%s", print_string}, {"%%", print_percent}};

	int i;

	if (format[1] == " " || format[1] == "\0")
		return (0);

	for (i = 0; ftypes[i].form; i++)
	{
		if (format[i] == ftype[i].form[1]
				return (ftypes[i].func);
	}

	return (0);
}

