#include <stdio.h>
#include <unistd.h>

/**
 * main - prints exactly "and that piece of art is useful"
 * Return: (1)
*/
int main(void)
{
	write("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1); /* program should return 1 */
}
