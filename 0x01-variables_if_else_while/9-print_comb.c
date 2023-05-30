#include<stdio.h>
/**
 * main - Entry point
 * Description - This program prints all digits from 0 to 9
 * Return: 0
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		if (i == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
