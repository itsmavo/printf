#include "main.h"
/**
 * print_un_int - prints unsigned int
 * @arguments: number to be printed
 * @buf: buffer pointer
 * @ibf: index to buffer pointer
 *
 * Return: num of chars printed
 */
int print_un_int(va_list arguments, char *buf, unsigned int ibf)
{
  unsigned int input, temp, i, d;

  input = va_arg(arguments, unsigned int);
  temp = input;
  d = 1;
  while (temp > 9)
    {
      d *= 10;
      temp /= 10;
    }
  for (i = 0; d > 0; d /= 10, i++)
    {
      ibf = hand_buffer(buf,((input / d) % 10) + '0', ibf);
    }
  return (i);
}
