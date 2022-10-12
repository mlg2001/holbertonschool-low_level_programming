#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array
 *@size:unsigned int
 *@c:char
 *Return: 0
 */

char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;

if (!(size))
	return (NULL);

array = malloc(size * sizeof(char));
	if (!(array))
		return (NULL);

for (i = 0; i < size; i++)
	array[i] = c;

return(array);
}
