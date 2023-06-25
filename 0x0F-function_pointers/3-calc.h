#ifndef _3_CALC_H_
#define _3_CALC_H_

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/* Operators' Functions */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/* Function that compares operators and choose function that match operator */
int (*get_op_func(char *s))(int, int);

#endif /* _3_CALC_H_ */
