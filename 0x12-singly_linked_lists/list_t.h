#ifndef CALC_H

#define CALC_H



#include <stdlib.h>

#include <stdio.h>



/**

* struct list_s - singly linked list

* @n: integer

* @next: points to the next node

*

* Description: singly linked list node structure

* for Holberton project

*/

typedef struct list_s

{

int n;

struct list_s *next;

} list_t;



size_t print_list(const list_t *h);

size_t list_len(const list_t *h);

list_t *add_node(list_t **head, const int n);

list_t *add_node_end(list_t **head, const int n);

Void free_list(list_t *head);
int pop_list(list_t **head);

list_t *get_node_at_index(list_t *head, unsigned int index);

int sum_list(list_t *head);

list_t *insert_node_at_index(list_t **head, unsigned int idx, int n);

int delete_nodeint_at_index(listint_t **head, unsigned int index);



listint_t *reverse_listint(listint_t **head);



#endif
