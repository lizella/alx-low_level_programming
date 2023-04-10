#include "main.h"
/**
 * flip_bits - returns the number of bits needed to flip
 * @n: number
 * @m: number2
 *
 * Return: number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
	{
	int num, count = 0;
	unsigned long int num1;
	unsigned long int exclusive = n ^ m;

	for (num = 63; num >= 0; num--)
	{
		num1 = exclusive >> num;
		if (num1 & 1)
			count++;
	}

	return (count);
}



