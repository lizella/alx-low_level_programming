#include "main.h"
/**
 * get_endianness - checks endiannes
 * Return: 0 for big,1 little
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *c = (char *) &num;

	return (*c);
}
