#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The string to hash.
 * Return: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash_str;
	int c;

	hash_str = 5381;
	while ((c = *str++))
		hash_str = ((hash_str << 5) + hash_str) + c;


	return (hash_str);
}
