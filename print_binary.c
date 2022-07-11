#include "main.h"
/**
 * print_binary - prints decimal in binary
 * @arguments: input string
 * @buf: buffer pointer
 * @ibf: index for buffer pointer
 *
 * Return: number of chars printed
 */
int print_binary(va_list arguments, char *buf, unsigned int ibf)
{
  int input, c, i, f1,neg;
  char *binary;

  input = va_arg(arguments, int);
  neg = 0;

  if(input == 0)
    {
      ibf = hand_buffer(buf, '0', ibf);
      return (1);
    }
  if(input < 0)
    {
      input = (input * -1) - 1;
      neg = 1;
    }
  binary = malloc(sizeof(char) * (32 + 1));
  binary = fillbarr(binary, input, neg, 32);
  f1 = 0;

  for (c = i = 0; binary[i]; i++)
    {
      if (f1 == 0 && binary[i] == '1')
	f1 = 1;
      if (f1 == 1)
	{
	  ibf = hand_buffer(buf, binary[i], ibf);
	  c++;
	}
    }
  free(binary);
  return (c);
}
