#include "main.h"

/**
 * _isalpha - print alphabet character
 * @c: character to paste
 * Return: 1 if c is a letter, lowercase or uppercase 
 * Return: 0  otherwe
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
