#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - A function that calculates the sum of two
 * variables a & b.
 * @a: the first variable.
 * @b: the second variable.
 *
 * Return: the sum.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - A function that calculates the difference of
 * two variables a & b.
 * @a: the first variable
 * @b: the second variable
 *
 * Return: the difference.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - A function that calculates the mul of two
 * variables a & b
 * @a: the first variable.
 * @b: the second variable.
 *
 * Return: the mul
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - A function that calculates the division
 * of two variables a & b.
 * @a: the first variable.
 * @b: the second variable.
 *
 * Return: the division.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - A function that calculates the modulo of two vars
 * @a: the first variable
 * @b: the second variable
 *
 * Return: the result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
