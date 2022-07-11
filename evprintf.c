#include "main.h"
/**
 * evprintf - returns amount of identifiers
 * @s: argument identifier
 * @index: index of argument identifier
 *
 * Return: amount of identifiers
 */
int evprintf(const char *s, int index)
{
  print_t pr[] = {
		  {"c", print_chr}, {"s", print_str},
		  {"d", print_int}, {" %", print_psign},
		  {NULL, NULL},
  };
  int a = 0, b = 0, findex;

  findex = index;
  while (pr[a].args_type)
    {
      if (s[index] == pr[a].args_type[b])
	{
	  if (pr[a].args_type[b + 1] != '\0')
	    index++, j++;
	  else
	    break;
	}
      else
	{
	  b = 0;
	  i++;
	  index = findex;
	}
    }
  return (j);
}
