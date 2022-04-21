#include "lists.h"
/**
 * free_list - function
 * @head: a double pointer to a linked list
 * Return: nothing
 */
void free_list(list_t *head)
{
list_t *temp = head;

while (head != NULL)
{
temp = head;

free(temp->str);
free(temp);
head = head->next;
}
