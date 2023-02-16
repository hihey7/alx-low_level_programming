#include <stdio.h>

/**
 * main - Entry
 *
 * Return: Always 0
 */
int main(void)
{
	printf("size of a char: %lu bite(s)", sizeof(char));
	printf("size of an int: %lu bite(s)", sizeof(int));
	printf("size of a long int: %lu bite(s)", sizeof(long int));
	printf("size of a long long int: %lu bite(s)", sizeof(long long int));
	printf("size of a float: %lu bite(s)", sizeof(float));
	return (0);
}

