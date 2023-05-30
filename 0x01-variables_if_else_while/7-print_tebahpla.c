#include<stdio.h>
/**
 * main - Entry point
 * Description - This program prints the alphabet in lower case
 * Return: 0
 */
int main(void)
{
	char c = 'z';

	while (c <= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
