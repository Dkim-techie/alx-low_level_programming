#include "main.h"

/*
 * main -prints the alphabet, in lowercase
 * return (void)
 */

void print_alphabet(void)

{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar (c);
}
_putchar('\n');
}
