#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory.
 * @b: amount of bytes
 * Return: pointer to the allocated memory
 * if malloc fails, status value is equal to 98
 */

void *malloc_checked(unsigned int x)
{
	/*declare a pointer to be used*/
	int *ptr;

	/*reserve memory spaces in heap*/
	ptr = malloc(x);

	/*if malloc doesn't fails*/
	if (ptr == NULL)
	{
		free(ptr);
		exit(98); /*Terminate process with 98 as return value*/
	}
	return (ptr);
}
