#include "main.h"

/**
 * _strlen - returns the length of string
 * @s: string whoose lenght is to be return
 * Return: lenth
 */

int _strlen(char *s)
{
		int lenght = 0;

		while (*s != '\0')
		{
			lenght++;
			s++;
		}
		return (lenght);
}
