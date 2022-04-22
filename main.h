#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' charcter
 */
typedef struct flags
{
int plus;
int space;
int hash;
} flags_t;

/**
 * struct printHandler - struct to choose the right function
 * @c: format specifier
 * @f: pointer to the correct printing function
 */
typedef struct printHandler
{
char c;
int (*f)(va_list ap, flags_t *f);
} ph;

int print_int(va_list l, flags_t *f);
void print_number(int n);
int print_unsigned(va_list l, flags_t *f);
int count_digit(int i);

int _putchar(char c);
void _puts(char *str);
int _strlen(char *s);

int _printf(const char *format, ...);

int (*get_print(char s))(va_list, flats_t *);

int get_flag(char s, flags_t *f);

char *convert_to(char representation[], unsigned int num, int base);
int function_manager(char c, va_list arg);
int _switch(char c, va_list arg);
int print_character(va_list arg);
int print_sign(va_list arg, int base);
int print_unsign(va_list arg, int base);
int print_string(va_list arg);
int print_ptr(va_list arg);
int print_rot13(va_list arg);
#endif
