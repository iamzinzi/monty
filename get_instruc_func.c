#include "monty.h"

/**
 * get_instruc_func - a function that reads command string and selects
 * the correct function to perform
 * @s: command string
 * @status: pointer to integer that will be set to 0 on success
 * @line_number: the number of line count
 *
 * Return: a pointer to the corresponding function
 */
void (*get_instruc_func(char *s))(stack_t **stack,
					       unsigned int line_number)
{
	instruction_t ops[] = {
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].opcode != NULL)
	{
		if (strcmp(s, ops[i].opcode) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	exit(-1);
}
