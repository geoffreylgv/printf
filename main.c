#include <stdio.h>
#include <limits.h>
#include "main.h"
int main(void)
{
	int len, len3;
	int len4, len6;
	len = _printf("test\n");
	printf("%d\n", len);
	len4 = _printf("%s.\n", "test");
	printf("%d\n", len4);
	len6 = _printf("%s.\n",NULL);
	printf("%d\n", len6);
	len3 = _printf("char : %c , string : %s\n test : %r %% % \n", 't', "test");
	/*len3 = _printf("char : %c\n", 'c');*/
        /*len2 = printf("Percent:[%%]\n");*/
    	printf("Len:[%d]\n", len3);
    	printf("Len:[%d]\n", len3);
	_printf("______________END_____________\n");


	return (0);
}
