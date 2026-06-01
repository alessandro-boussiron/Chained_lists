/*
** EPITECH PROJECT, 2026
** Chained_lists
** File description:
** node_deletion
*/

#include "chained.h"
#include <stdlib.h>

// Retrives the node sent
void remove_node(node_t *node)
{
    if (!node)
        return;
    node_t *next = node->next;
    node_t *prev = node->previous;
    if (node->next)
        node->next->previous = prev;
    if (node->previous)
        node->previous->next = next;
    free(node);
}

// Remove the node at "this idx"
void remove_at(node_t **list, size_t idx)
{
    if (!list || !(*list))
        return;
    node_t *ptr = NULL;
    if (!idx) {
        ptr = (*list)->next;
        remove_node(*list);
        *list = ptr;
        return;
    }
    ptr = (*list);
    for (size_t i = 1; ptr->next && i <= idx; i++)
        ptr = ptr->next;
    remove_node(ptr);
}

// Destoy entirely this list
void list_destroy(node_t **list)
{
    node_t *ptr = NULL;
    node_t *prev = NULL;
    if (!list || !(*list))
        return;
    ptr = (*list)->next;
    prev = (*list);
    while (ptr) {
        prev = ptr;
        ptr = ptr->next;
    }
    ptr = prev;
    prev = prev->previous;
    while (ptr) {
        if (prev)
            prev = prev->previous;
        remove_node(ptr);
        ptr = prev;
    }
    (*list) = NULL;
}