#include "main.h"
/**
 * print_str - writes string to stdout
 * @arguments: input string
 * @buf: buffer pointer
 * @ibf: index for buffer pointer
 *
 * Return: On success 1
 */
int print_str(va_list arguments, char *buf, unsigned int ibf)
{
  char *str;
  unsigned int i;
  char nil[] = "(null)";

  str = va_arg(arguments, char *);
  if (str == NULL)
    {
      for (i = 0; nil[i]; i++)
	ibf = hand_buffer(buf, nil[i], ibf);
      return(-1)
    }
  for (i = 0; str[i]; i++)
    ibf = hand_buffer(buf, str[i], ibf);
  return (i);
}
