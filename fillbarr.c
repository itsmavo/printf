#include "main.h"
/**
 * fillbarr - prints decimal in binary
 * @binary: pointer to binary
 * @input: input number
 * @neg: if input is negative
 * @lim: size of binary
 *
 * Return: input in binary
 */
char *fillbarr(char *binary, long int input, int neg, int lim)
{
  int i;

  for (i = 0; i < lim; i++)
    binary[i] = '0';
  binary[lim] = '\0';

  for (i = lim - 1; input > 1; i--)
    {
      if (input == 2)
	binary[i] = '0';
      else
	binary[i] = (input % 2) + '0';
      input /= 2;
    }
  if (input != 0)
    binary[i] = '1';
  if (neg)
    {
      for (i = 0; binary[i]; i++)
	if(binary[i] == '0')
	  binary[i] = '1';
	else
	  binary[i] = '0';
    }
  return (binary);
}
