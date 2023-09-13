#include "main.h"

/**
* _strstr - locate a substring.
* @haystack: the string to be searched.
* @needle: the ssubstring to be located.
* Return: if the substring is located a pointer to the beginning .
* or the located substring.
*/

char *_strstr(char *haystack, char *needle)
{
int index;

if (needle == 0)
return (haystack);
while (haystack)
{
index = 0;
if (haystack[index] == needle[index])
{
do {
if (needle[index + 1] == '\0')
return (haystack);
index++;
} while (haystack[index] == needle[index]);
}
haystack++;
}
return ('\0');
}
