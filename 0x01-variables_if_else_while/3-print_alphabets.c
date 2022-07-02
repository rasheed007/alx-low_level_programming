#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  *main - Task 3 prints the alphabet in lowercase, and then in uppercase
 *   *followed by a new line
 *     *Return: zero on success
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
