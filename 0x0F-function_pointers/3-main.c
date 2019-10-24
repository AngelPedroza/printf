#include "3-calc.h"

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

		if (*argv[1] >= '0' && *argv[1] <= '9')
		{
			res1 = atoi(argv[1]);
		}

		if (*argv[3] >= '0' && *argv[3] <= '9')
		{
			res2 = atoi(argv[3]);
		}
		res = (*get_op_func(argv[2]))(res1, res2);

		printf("%d\n", res);
		return (0);

	}

	printf("Error\n");
	exit(98);


}
