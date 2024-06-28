#include <stdio.h>
/**
* print_alphabet - Prints the alphabet in lowercase followed by a new line
*/

void print_alphabet(void)

{
	char letter = 'a';	
	while (letter <= 'z')
	{
	_putchar(letter);
	letter++;
	}
    _putchar('\n');
}

/* Example usage in main function */
int main(void)
{
	print_alphabet();
	return (0);
}
