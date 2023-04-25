#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 **/
int main(void)
{
int length1;
int length2;
unsigned int ui;
void *addr;

length1 = _printf("Let's try to printf a simple sentence.\n");
length2 = printf("Let's try to printf a simple sentence.\n");
ui = (unsigned int)INT_MAX + 1024;
addr = (void *)0x7ffe637541f0;
_printf("Length:[%d, %i]\n", length1, length1);
printf("Length:[%d, %i]\n", length2, length2);
_printf("Negative:[%d]\n", -762534);
printf("Negative:[%d]\n", -762534);
_printf("Unsigned:[%u]\n", ui);
printf("Unsigned:[%u]\n", ui);
_printf("Unsigned octal:[%o]\n", ui);
printf("Unsigned octal:[%o]\n", ui);
_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
_printf("Character:[%c]\n", 'H');
printf("Character:[%c]\n", 'H');
_printf("String:[%s]\n", "I am a string !");
printf("String:[%s]\n", "I am a string !");
_printf("Address:[%p]\n", addr);
printf("Address:[%p]\n", addr);
length1 = _printf("Percent:[%%]\n");
length2 = printf("Percent:[%%]\n");
_printf("Len:[%d]\n", length1);
printf("Len:[%d]\n", length2);
_printf("Unknown:[%r]\n");
printf("Unknown:[%r]\n");
return (0);
}

