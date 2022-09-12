#include <stdio.h>
/**
 * main -Starting point
 * prints lower case letters a-z
 * Return: Always returns 0
 */
int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
putchar(alphabet);
putchar('\n');
return (0);
}
