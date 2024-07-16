#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function that prints the name
 * @name: name that will be printed
 * @f: pointer function
 **/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
