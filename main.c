#include <stdio.h>
#include <limits.h>
#include "main.h"
int main(void)
{
	int len;
	int len4, len6;
	len = _printf("test\n");
	printf("%d\n", len);
	len4 = _printf("%s.\n", "test");
	printf("%d\n", len4);
	len6 = _printf("%s.\n",NULL);
	printf("%d\n", len6);
	_printf("______________END_____________\n");


	return (0);
}
