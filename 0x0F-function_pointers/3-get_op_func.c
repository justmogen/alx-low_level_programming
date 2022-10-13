#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - select correct function to perform the operation asked 
 *		by user
 *@s:operator passed as argument
 *Return: If s does not match any of the 5 expected operators
 *	(+, -, *, /, %), return NULL
 * else returns a pointer to the function that corresponds to the
 *	operator given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	p_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;
	while (ops[i].op != NULL && *(ops[i].op) != *s)
	{
		i++;
	}
	return (ops[i].f);
}
