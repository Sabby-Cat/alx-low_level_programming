#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - adds 2 nrs
 * @a: num 1
 * @b: num 2
 * Return: answer
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts 2 nrs
 * @a: num 1
 * @b: num 2
 * Return: answer
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies 2 nrs
 * @a: num 1
 * @b: num 2
 * Return: answer
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - devides 2 nrs
 * @a: num 1
 * @b: num 2
 * Return: answer
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns modus of 2 nrs
 * @a: num 1
 * @b: num 2
 * Return: answer
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
