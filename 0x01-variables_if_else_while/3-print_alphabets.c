#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there 
 * Main -a program that prints the alphabet in lowercase, followed by a new line.
 * Description You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
 * return(0) 
 *  betty style doc for function main goes there
 */

int main(void)

	{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
	}
