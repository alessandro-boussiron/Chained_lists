/*
** EPITECH PROJECT, 2026
** Chained_lists
** File description:
** add_node
*/

#include "chained.h"
#include <stdlib.h>

// Create a node
node_t *create_node(void *data)
{
    node_t *node = NULL;

    if (!data)
        return NULL;
    node = malloc(sizeof(node_t));
    if (!node)
        return NULL;
    node->data = data;
    node->next = NULL;
    node->previous = NULL;
    return node;
}

// Pop a node
void pop_node(node_t **list, node_t *data)
{
    if (!list || !data)
        return;
    if (!(*list)) {
        (*list) = data;
        return;
    }
    node_t *next = (*list);
    (*list) = data;
    (*list)->next = next;
    next->previous = (*list);
    return;
}

// Append a node
void app_node(node_t **list, node_t *data)
{
    if (!list || !data)
        return;
    if (!(*list)) {
        (*list) = data;
        return;
    }
    node_t *prev = (*list);
    while (prev->next)
        prev = prev->next;
    prev->next = data;
    data->previous = prev;
    return;
}