#include "main.h"

/**
 * binary_to_uint - converts binary o unsigned int
 * @b: string holding binary representation
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int i = 0;

	if (!b)
		return (0);
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		res = res << 1;
		if (b[i] == '1')
			res += 1;
		i++;
	}
	return (res);
}
