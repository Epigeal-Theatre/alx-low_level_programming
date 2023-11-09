#include <stdlib.h>
#include <stdio.h>


/**
* main - print op-codes
*
* @argc: number o' args
*
* @argv: arr of args
*
* Return: 0 for success
*/

int main(int argc, char *argv[])
{
	int bytes, x;

	char *arr;

	if (argc != 2)

	{

	printf("Error\n");
	exit(1);

	}

	bytes = atoi(argv[1]);

	if (bytes < 0)

	{
	printf("Error\n");
	exit(2);
	}

	arr = (char *)main;

	for (x = 0; x < bytes; x++)

	{

	if (x == bytes - 1)

	{

	printf("%02hhx\n", arr[x]);
	break;

	}

	printf("%02hhx ", arr[x]);

	}

	return (0);
}

