/*
** EPITECH PROJECT, 2026
** Chained_lists
** File description:
** node_get
*/

#include "chained.h"

// Retrives the node at "this idx"
node_t *get_at_idx(node_t *list, size_t idx)
{
    if (!list)
        return NULL;
    node_t *ptr = list;
    for (int i = 0; ptr && i < idx; i++)
        ptr = ptr->next;
    return ptr;
}

// Retrives the node if it matches "this" condition
node_t *find_node(node_t *list, bool (*compare)(void *data, void *to_compare), void *to_compare)
{
    if (!list || !compare || !to_compare)
        return NULL;
    node_t *ptr = list;
    for (; ptr && compare(ptr->data, to_compare) == false; ptr = ptr->next);
    return ptr;
}

// Helper function to get the last element in the list
node_t *get_tail(node_t *list)
{
    if (!list)
        return NULL;
    node_t *ptr = list;
    while(ptr->next)
        ptr = ptr->next;
    return ptr;
}