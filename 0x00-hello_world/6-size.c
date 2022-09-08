#include<stdio.h>
int main() 
{
	char charType;
	int intType;
	long longType;
	long long longlongType;
	float floatdType;

	// sizeof evaluates the size of a variable
	printf("Size char: %zu byte(s)\n", sizeof(char));
	printf("Size int: %zu byte(s)\n", sizeof(int));
	printf("Size long int: %zu byte(s)\n", sizeof(long));
	printf("Size long long int: %zu byte(s)\n", sizeof(longlong));
	printf("Size float: %zu byte(s)\n", sizeof(float));
	return (0);
}
