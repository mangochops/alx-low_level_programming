#include "main.h"

/**
 *  _strcat - function that concatenates two strings
 *  @dest: entered value
 *  @src: entered value
 *  Return: void
 */
char *_strcat(char *dest, char *src)
{

int a;
int b;

i = 0;
while (dest[i] != '\0')

{

a++;

}

b = 0;

while (src[b] != '\0')

{

dest[i] = src[b];

b++;

}

dest[i] = '\0';

return (dest);

}
