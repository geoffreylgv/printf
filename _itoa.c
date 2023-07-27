#include "main.h"

/**
 * _itoa - C original itoa function
 * @num: number to convert
 * @base: specified base
 *
 * Return: string, see: 'narnat' github account
 */
char *_itoa(long int num, int base)
{
	static char *array;
	static char buffer[50];
	char sign;
	char *ptr;
	unsigned long n;

	array = "0123456789abcdef";
	sign = 0;
	n = num;

	if (num < 0)
	{
		n = -num;
		sign = '-';
	}
	ptr = &buffer[49];
	*ptr = '\0';

	do	{
		*--ptr = array[n % base];
		n /= base;
	} while (n != 0);

	if (sign)
		*--ptr = sign;
	return (ptr);
}

