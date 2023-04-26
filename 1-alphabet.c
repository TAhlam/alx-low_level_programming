#include "main.h"
/**
 * print_alphabet-Entry_point
 *
 * Return: Always 0 (sucess)
 */
void print_alphabet(void)
{
char ch;

for (ch = 'a' ; ch <= 'z' ; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
