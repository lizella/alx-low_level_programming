#include "main.h"
/**
 * print_binary - prints binary representation of a number
 * @n: number to print
 *
 * Return: number
 */
void print_binary(unsigned long int n)
{
	int num, count = 0;
	unsigned long int data;

	for (num = 50; num >= 0; num--)
	{
		data = a >> num;
		if (data & 1)
		{
			_putchar('1');
			count++;
		}
else if (count)
	_putchar('0');
	}
	if (!count)
		_putchar('0');
}

