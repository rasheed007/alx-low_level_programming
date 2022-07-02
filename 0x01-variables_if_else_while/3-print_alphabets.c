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
	char letter;


	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);



	putchar('\n');

	return (0);

}


