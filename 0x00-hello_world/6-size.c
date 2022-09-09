#include<stdio.h>
/**
 * main - print the size of various types
 *
 * Description: prints the size of various types on the computer it is compiled
 * and run on
 *
 * Return: Allways 0 (Success)
 */
int main() 
{
	// sizeof evaluates the size of a variable
	printf("Size char: %zu byte(s)\n", sizeof(char));
	printf("Size int: %zu byte(s)\n", sizeof(int));
	printf("Size long int: %zu byte(s)\n", sizeof(long int));
	printf("Size long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size float: %zu byte(s)\n", sizeof(floatT));
	return (0);
}
