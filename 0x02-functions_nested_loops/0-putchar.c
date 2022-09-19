
#include <stdio.h>

/**
 * main -  prints my name, followed by a new line
 * Return: Always 0 (Success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
	_putchar('F');
	_putchar('o');
	_putchar('d');
	_putchar('e');
	_putchar('N');
	_putchar('D');
	_putchar('I');
	_putchar('A');
	_putchar('Y');
	_putchar('E');
	_putchar('\n');

	return (0);
}
