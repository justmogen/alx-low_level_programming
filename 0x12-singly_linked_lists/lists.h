#ifndef LISTS_H
#define LISTS_H

/**
 * File: list.h
 * Desc: Header file containing prototypes for all the used
 *	used functions and types written under this directory
 */

#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: [malloce'd string]
 * @len:length of the string
 * @next:points to next node
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);


#endif
