#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct print - struct for print functions
 * @args_types: identifier
 * @f: pointer to a print functions
 *
 * Description: struct that stores pointers to
 * print functions.
 */
typedef struct print
{
  char *args_type;
  int (*f)(va_list, char *, unsigned int);
} print_t;

/* printf.c */
int_printf(const char *format, ...);
unsigned int hand_buffer(char *buf, char c, unsigned int ibf);
int print_buffer(char *buf, unsigned int nbf);
int print_chr(va_list arguments, char *buf, unsigned int ibf);
int print_str(va_list arguments, char *buf, unsigned int ibf);
int print_psign(va_list __attribute__((unused)), char *, unsigned int);
int (*get_printf(const char *s, int index))(va_list, char *, unsigned int);
#endif
