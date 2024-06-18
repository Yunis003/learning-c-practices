#include <stdio.h>
/**
* main - function
*
* Return: void
**/

int main(void)
{
	printf("Size of a char:%cu byte(s)\n", sizeof(char));
	printf("Size of an int:%cu byte(s)\n", sizeof(int));
	printf("Size of a long int:%cu byte(s)\n", sizeof(long int));
	printf("Size of a long long int:%cu byte(s)\n", sizeof(long long int));
	printf("Size of a float:%cu byte(s)\n", sizeof(float));
	return (0);
}
