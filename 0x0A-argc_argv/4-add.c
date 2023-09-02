#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - main point.
* @argc: arg count.
* @argv: arg vector.
* Return: 0.
*/

int main(int argc, char *argv[])
{
int sum, num, i;

sum = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
char *num_str = argv[i];
while (isspace(*num_str))
{
num_str++;
}
if (*num_str == '\0')
{
continue;
}
num = 0;
while (*num_str != '\0')
{
if (!isdigit(*num_str))
{
printf("Error\n");
return (1);
}
num = num * 10 + (*num_str - '0');
num_str++;
}
sum += num;
}
printf("%d\n", sum);
return (0);
}
