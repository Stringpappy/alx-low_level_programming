#include "main.h"

/**
 * _strchr - Locates the first occurrence of a character in a string.
 * @str: Pointer to the input string.
 * @ch: Character to find in the string.
 * 
 * Return: Pointer to the first occurrence of the character in the string,
 *         or NULL if the character is not found.
 */
char *_strchr(char *str, char ch)
{
    while (*str != '\0')
    {
        if (*str == ch)
        {
            return (str);
        }
        str++;
    }
    if (*str == ch)
    {
        return (str);
    }
    return (NULL); 
 }
