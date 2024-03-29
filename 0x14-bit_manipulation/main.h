#ifndef _MAIN_H_
#define _MAIN_H_

/* Built-in Headers */
#include <string.h>
#include <math.h>

/* Function Prototypes */
int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void _divide(unsigned long int n);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif /* _MAIN_H_ */
