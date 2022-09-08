#include<stdio.h>
int main() 
{
	char charType;
	int intType;
	long longType;
	long long longlongType;
	float floatType;

	// sizeof evaluates the size of a variable
	printf("Size char: %zu byte(s)\n", sizeof(charType));
	printf("Size int: %zu byte(s)\n", sizeof(intType));
	printf("Size long int: %zu byte(s)\n", sizeof(longType));
	printf("Size long long int: %zu byte(s)\n", sizeof(longlongType));
	printf("Size float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
