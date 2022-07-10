#include "main.h"
#include <stdio.h>
/**
 * print_chr - writes char to stdout
 * @arguments: input char
 * @buf: buffer pointer
 * @ibf: index for buffer pointer
 *
 * Return: On success 1.
 */
int print_chr(va_list arguments, char *buf, unsigned int ibf)
{
  char a;
  a = va_arg(arguments, int);
  hand_buffer(buf, a, ibf);

  return(1);
}
