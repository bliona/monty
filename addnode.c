#include "monty.h"
/**
 * addnode - adds node to the stack"s head 
 * @head: head of the stack
 * @a: new_value
 * Return: no return
*/
void addnode(stack_t **head, int a)
{

	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->prev = new_node;
	new_node->n = a;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
