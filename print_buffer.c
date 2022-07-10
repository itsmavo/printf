#include "main.h"
/**
 * print_buffer - prints buffer
 * @buf: buffer pointer
 * @nbf: num of bytes to print
 * Return: number of bytes printed
 */
int print_buffer(char *buf, unsigned int nbf)
{
  return (write(1, buf, nbf));
}
