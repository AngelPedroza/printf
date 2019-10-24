#include "3-calc.h"
#include <string.h>

/**
 * main - outputs the result of calculation program
 *
 * @argc: argument count
 * @argv: argument data
 * Return: Result
 */

int main(int argc, char *argv[])
{
	int res1, res2, res;


	if (argc == 4)
	{
		res1 = atoi(argv[1]);
		res2 = atoi(argv[3]);


		if ((argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*'
		     && argv[2][0] != '/' && argv[2][0] != '%')
		    || strlen(argv[2]) != 1)
		{
			printf("Error\n");
			exit(99);
		}
		res = (*get_op_func(argv[2]))(res1, res2);

		printf("%d\n", res);
		return (0);

	}


	printf("Error\n");
	exit(98);


}
