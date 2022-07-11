#include "main.h"
/**
 * print_int - prints int
 * @argments: input str
 * @buf: buffer pointer
 * @ibf: index for buffer pointer
 *
 * Return: number of chars printed
 */
int print_int(va_list arguments, char *buf, unsigned int ibf)
{
  int input;
  unsigned int inp, temp, i, div, neg;

  input = va_arg(arguments, int);
  neg = 0;
  if (input < 0)
    {
      inp = input * -1;
      ibf = hand_buffer(buf, '-', ibf);
      neg = 1;
    }
  else
    {
      inp = input;
    }

  temp = inp;
  div = 1;

  while (temp > 9)
    {
      div *= 10;
      temp /= 10;
    }

  for (i = 0; div > 0; div /= 10, i++)
    {
      ibf = hand_buffer(buf, ((inp / div) % 10) + '0', ibf);
    }
  return (i + neg);
}
