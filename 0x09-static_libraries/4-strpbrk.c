#include "main.h"
/**
 *  _strpbrk - locates the first occurence in s if any bytes is accepts
 * @s: the string we look for occurences in
 * @accept: the print we compare against
 * Return: a pointer to the byte or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	char c, *p;
		for (c = *s; c != 0; s++, c = *s)
		{
			for (p = accept; *p != 0; p++)
			{
				if (c == *p)
				{
					return (s);
				}
			}
		}
	return (0);
}
