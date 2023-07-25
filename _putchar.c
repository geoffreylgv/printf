#include "main.h"

/**
* _putchar - write out to the standard output the char c
* @c: char value character to be printed
*
* Return: always success 1 / -1 on error
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
