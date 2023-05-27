i#ifndef _LISTS_H_
#define _LISTS_H_

#include <stddef.h>

/**
 * struct dlistint_s - This is a doubly linked list
 * @n: integer
 * @prev: this points to the prev node
 * @next: this points to the next node
 *
 * Description: This is a doubly linked list node structure
 * for ALX project
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
size_t print_dlistint(const dlistint_t *h);
void free_dlistint(dlistint_t *head);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

#endif
