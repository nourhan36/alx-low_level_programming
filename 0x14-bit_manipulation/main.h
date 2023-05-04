#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
unsigned int binary_to_uint(const char *str);
unsigned int flip_bits(unsigned long int st, unsigned long int nd);
int clear_bit(unsigned long int *ptr, unsigned int idx);
int get_endianness(void);
int get_bit(unsigned long int num, unsigned int idx);
int set_bit(unsigned long int *ptr, unsigned int idx);
int _atoi(const char *s);
void print_binary(unsigned long int bin);

#endif
