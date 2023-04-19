#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - perform an opertaion selected by user.
 * @oper: The operator.
 *
 * Return: A pointer to the operator function.
 */
int (*get_op_func(char *oper))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *oper)
		i++;

	return (ops[i].f);
}
