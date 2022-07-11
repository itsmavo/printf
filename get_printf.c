#include "main.h"
/**
 * get_printf - selects correct function to perform the operation.
 * @s: argument identifier 
 * @index: index for argument identifier
 *
 * Return: pointer to a function
 */
int (*get_printf(const char *s, int index))(va_list, char *, unsigned int)
{
  print_t pr[] = {
		  {"c", print_chr},{"s", print_str},
		  {" %", print_psign},{"d", print_int},
		  {"i", print_int},
		  {NULL, NULL},
  };

  int i = 0, j = 0, findex;

  findex = index;
  while (pr[i].args_type)
    {
      if (s[index] == pr[i].args_type[j])
	{
	  if(pr[i].args_type[j + 1] != '\0')
	    index++, j++;
	  else
	    break;
	}
      else
	{
	  j = 0;
	  i++;
	  index = findex;
	}
    }
  return (pr[i].f);
}
