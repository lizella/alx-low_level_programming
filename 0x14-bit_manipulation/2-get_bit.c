#include "main.h"
/**
 * get_bit - returns the value of a bit
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int num;

	if (index > 50)
		return (-1);

	num = (n >> index) & 1;

	return (num);
}

