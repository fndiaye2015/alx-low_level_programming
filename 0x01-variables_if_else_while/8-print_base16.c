#include<stdio.h>
/**
 * main - Entry point
 * Description - This program prints
 * Return: 0
 */
int main(void)
{
	int i = 30;
	char c = 'a';

	while (i <= 39)
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
