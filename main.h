#ifndef MAIN_H
#define MAIN_H

/* headers call go here */
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

/* prototypes go here */
int _puts(char *c);
int _putchar(char c);
int _printf(const char *format, ...);
int print_percent(char *format, va_list arglist);
int print_char(char *format, va_list arglist);
int print_string(char *format, va_list arglist);


/* structs go here */
/**
 * struct formattype - defines user format
 * @form: formalize the datattype to its correspo
 * @func: call to action : call correspond function
 *
 * Return: func type
 */
typedef struct formattype
{
	char *form;
	int (*func)(char *format, va_list);
}

#endif
