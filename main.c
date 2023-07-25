#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * main - Entry point test function
 *
 * Return: Success
 */
int main(void)
{
	int len, len4, len6, len7;

	len = _printf("test\n");
	len6 = _printf("%c %s %s\n %% %r %k",'i',"null is", NULL);
	len4 = _printf("%s\n");
	len7 = printf("%c %s %s\n %% %r %k",'i',"null is", NULL);
	printf("len7 = %d\n", len7);
	printf("len4 = %d\n", len4);
	printf("len = %d\n", len);
	printf("len6 = %d\n", len6);
	_printf("char:%c, string:%s\n", 't', "test");
	/*
	_printf("somthin fake%\n");
	_printf("fake %vinci %\n");
	printf("real %vinci %\n");
	printf("somethn real%\n");
	printf("len7 = %d\n", len7);
	printf("len4 = %d\n", len4);
	printf("len = %d\n", len);
	printf("len6 = %d\n", len6);
	len =_printf("char : %c\n",'c');
	len6 = printf("char : %c\n",'c');
	len4 = _printf("Percent:[%%%]\n");
	len7 = printf("Percent:[%%%]\n");
	_printf("Len:[%r]\n", 3);
	_printf("Len:[%r]\n", 3);
	printf("Len:[%r]\n", 4);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	*/
	_printf("______________END_____________\n");
	return (0);
}

