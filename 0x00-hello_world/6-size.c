#include<stdio.h>
int main() 
{
	char charType;
	int intType;
	long longType;
	long long longlongType;
	float floatType;

	// sizeof evaluates the size of a variable
	printf("Size of char: %zu bytes\n", sizeof(charType));
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of long int: %zu bytes\n", sizeof(longType));
	printf("Size of long long int: %zu bytes\n", sizeof(longlongType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	return (0);
}
