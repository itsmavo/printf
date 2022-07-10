#include "main.h"
/**
 * hand_buffer - concatenates the buffer chars
 * @buf: buffer pointer
 * @c: char to be concatenated
 * @ibf: index of buffer pointer
 *
 * Return: index pf buffer pointer
 */
insigned int hand_buffer(char *buf, char c, unsigned int ibf)
{
  if (ibf == 1024)
    {
      print_buffer(buf, ibf);
      ibf = 0;
    }
  buf[ibf] = c;
  ibf++;
  return (ibf);
}
