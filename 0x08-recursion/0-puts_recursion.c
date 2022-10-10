#include "main.h"
/**
 * _puts_recursion - function that prints a string.
 * @s:string
 * Return: none
 */
void _puts_recursion(char *s)
{
s = "lpa\0";	
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s++);
}
