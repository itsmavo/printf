#include "main.h"
/**
 * _printf - formats output to print data
 * @format: input string
 *
 * Return: number of chars printed
 */
int _printf(const char *format, ...)
{
  unsigned int i = 0, l = 0, ibf = 0;
  va_list arguments;
  int(*function)(va_list, char *, unsigned int);
  char *buffer;

  va_start(arguments, format), buffer = malloc(sizeof(char) * 1024);
  if(!format || !buffer || (format[i] == '%' && !format[i + 1]))
    return (-1);
  if (!format[i])
    return (0);
  for (i = 0; format && format[i]; i++)
    {
      if (format[i] == '%')
	{
	  if (format[i + 1] == '\0')
	    {
	      print_buffer(buffer,ibf), free(buffer), va_end(arguments);
	      return (-1);
	    }
	  else
	    {
	      function = get_printf(format, i + 1);
	      if (function == NULL)
		{
		  if (format[i + 1] == ' ' && !format[i + 2])
		    return (-1);
		  hand_buffer(buffer, format[i], ibf), l++, i--;
		}
	      else
		{
		  l += function(arguments, buffer, ibf);
		  i += evprintf(format, i + 1);
		}
	      
	    }
	  i++;
	}
      else
	hand_buffer(buffer, format[i], ibf), l++;
      for (ibf = l; ibf > 1024; ibf -= 1024)
	;
    }
  print_buffer(buffer, ibf), free(buffer), va_end(arguments);
  return (l);
}
