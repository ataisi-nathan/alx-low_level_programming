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
	char charType;
	int intType;
	long int longType;
	long long int longlongType;
	float floatdType;

	// sizeof evaluates the size of a variable
	printf("Size char: %zu byte(s)\n", sizeof(charType));
	printf("Size int: %zu byte(s)\n", sizeof(intType));
	printf("Size long int: %zu byte(s)\n", sizeof(longType));
	printf("Size long long int: %zu byte(s)\n", sizeof(longlongType));
	printf("Size float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
