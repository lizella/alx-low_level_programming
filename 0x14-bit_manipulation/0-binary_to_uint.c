#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: binary number
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
	{
	int num;
	unsigned int data = 0;

	if (!b)
		return (0);

	for (num = 0; b[num]; num++)
	{
		if (b[num] < '0' || b[num] > '1')
			return (0);
		data = 2 * data + (b[num] - '0');
	}

	return (data);
}

