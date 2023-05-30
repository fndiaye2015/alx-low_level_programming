#include<stdio.h>
/**
 * main - Entry point
 * Description - This program prints
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'e' || c == 'q')
		{
			c++;
			continue;
		}
		else
		{
			putchar(c);
			c++;
		}
	}
	putchar('\n');
	return (0);
}
