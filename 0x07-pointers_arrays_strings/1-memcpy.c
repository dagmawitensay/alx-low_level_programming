#include "main.h"

/**_memcpy: function that copies memory area forom src to dest
 * @dest: the destination of the copied data
 * @src: the source memory area
 * @n: number of bytes to be copied
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	
	return (dest);
}
