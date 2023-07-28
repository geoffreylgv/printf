#ifndef _main_h_
#define _main_h_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/* alx utils functions */
int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *str);
char *_itoa(long int, int);

/* format handler */
int handle_string(char *str);
int handle_char(va_list args);
int handle_percent(void);
int handle_digit(int num);
const char *format_navigation(const char *format, va_list args, int *count);
int handle_binary(va_list args);
int handle_octal(va_list ags);
int handle_unsigned_digit(va_list args);
int handle_hex_upper(va_list args);
int handle_hex_lower(va_list args);
int handle_pointer(va_list args);

#endif
