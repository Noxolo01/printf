#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(va_list args, int printed);
int printf_string(va_list args, int printed);
int printf_integer(va_list args, int printed);
int selector(const char *format, va_list args, int printed);
int printf_binary(unsigned int num, int printed);
int _printf(const char *format, ...);
int _x(unsigned int num, int printed, int uppercase);
int printf_octal(unsigned int num, int printed);
int printf_unsigned(unsigned int num, int printed);
int printf_reverse(va_list args, int printed);
int printf_pointer(va_list args, int printed);

#endif
