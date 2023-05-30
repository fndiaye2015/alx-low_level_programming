#include<stdio.h>
/**
 * main - Entry point
 * Description - This program prints
 * Return: 0
 */
int main(void)
{
	int i = 48;
	char c = 'a';

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
