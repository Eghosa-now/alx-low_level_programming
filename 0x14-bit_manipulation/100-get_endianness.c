#include "main.h"

/**
 * get_endianness - prog checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int z;
	char *x;

	z = 1;
	x = (char *)&z;
	return (*x);
}

