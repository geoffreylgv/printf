#include "main.h"

/**
 * handle_digit - handles digits '%i' '%d' in printf
 * @num: number parameter
 *
 * Return: (i) count
 */
int handle_digit(int num)
{
	char *str;
	int i;

	i = 0;

	str = _itoa(num, 10);

	i = _puts(str);

	return (i);
}

