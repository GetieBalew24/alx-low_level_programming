#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/**
 * File: variadic_functions.h
 * Auth: Brennan D Baraban
 * Desc: Header file containing prototypes for all functions
 * used in the 0x0F-variadic_functions directory.
 */

#include <stdarg.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
