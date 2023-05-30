#include<stdio.h>
/**
 * main - Entry point
 * Description - This program prints all digits from 0 to 9
 * Return: 0
 */
int main(void)
{
	int i = 48;
	int j = 49;

	for (; i < 57 ; i++)
	{
		if (i == 49)
		{
			j = 50;
		}
		else if (i == 50)
		{
			j = 51;
		}
		else if (i == 51)
		{
			j = 52;
		}
		else if (i == 52)
		{
			j = 53;
		}
		else if (i == 53)
		{
			j = 54;
		}
		else if (i == 54)
		{
			j = 55;
		}
		else if (i == 55)
		{
			j = 56;
		}
		else if (i == 56)
		{
			j = 57;
		}
		for (; j < 58 ; j++)
		{
			putchar(i);
			putchar(j);
			if (i == 56)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
