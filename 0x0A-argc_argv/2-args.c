#include <stdio.h>

/**
* main - main point.
* @argc: arg count.
* @argv: arg vector.
* Return: 0.
*/

int main(int argc, char *argv[])
{
int i;

(void)argc;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
