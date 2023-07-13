#include <stdio.h>
/*
 * main - vrarious computer types.
 * Return:0
 */
int main(void)
{
char x;
int y;
long int z;
long long int w;
float f;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizof(x));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(z));
printf("Size of long long int: %lu bytes(s)\n", (unsigned long)sizeof(w));
printf("Size of float: %lu bytes(s)\n", (unsigned long)sizeof(f));
return (0);
}
