#include "main.h"
#include <stdio.h>
/**
 * print_psign - writes the '%' char to stdout
 * @a: input char
 * @buf: buffer pointer 
 * @i: index for buffer pointer
 *
 * Return: On success 1
 */
int print_psign(va_list a __attribute__((unused)), char *buf, unsigned int i)
{
  hand_buffer(buf, '%', i);

  return(1);
}
