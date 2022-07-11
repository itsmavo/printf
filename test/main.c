#include "main.h"
#include <stdio.h>
/**
 * main - tests for the _printf function
 *
 * Return: always 0
 */
int main(void)
{
  int len = 98;

  _printf("Let's try to printf a simple sentence\n");
  _printf("Hello my name is %s %c ","Marvin \n", 'O');
  _printf("My year of birth is September 19%d\n", len);
  _printf("%b\n", 23);
  _printf("%i\n", len);
}
