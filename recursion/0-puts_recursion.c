#include "main.h"
/**
 * _puts_recursion - is a function name 
 * s is the variable 
 * Return
 * **/

void _puts_recursion(char *s)
{
	_putchar(*s);
	_puts_recursion(s + 1);
}
