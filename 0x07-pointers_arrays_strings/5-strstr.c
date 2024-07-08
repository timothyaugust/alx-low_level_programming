#include <stdio.h>
#include "main.h"

int coincidence(char *haystack, char *needle);

/**
 * _strstr - Entry point
 * @haystack: source string
 * @needle: searching string
 *
 * Return: pointer to the first occurrence of needle in haystack.
 */
char *_strstr(char *haystack, char *needle)
{
    while (*haystack)
    {
        if ((*haystack == *needle && coincidence(haystack, needle) == 1) || !*needle)
        {
            return haystack;
        }
        else
        {
            haystack++;
        }
    }
    return 0;
}

int coincidence(char *haystack, char *needle)
{
    while (*needle && *haystack == *needle)
    {
        haystack++;
        needle++;
    }

    if (*needle == '\0')
    {
        return 1;
    }
    return 0;
}

