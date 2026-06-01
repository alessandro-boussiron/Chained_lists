/*
** EPITECH PROJECT, 2026
** Chained_lists
** File description:
** node_apply
*/

#include "chained.h"

void apply_list(node_t *list, void *(*apply_fcn)(void *data))
{
    if (!list || !apply_fcn)
        return;
    node_t *ptr = list;
    while (ptr) {
        ptr->data = apply_fcn(ptr->data);
        ptr = ptr->next;
    }
    return;
}

void apply_at(node_t *list, void *(*apply_fcn)(void *data), int idx)
{
    if (!list || !apply_fcn)
        return;
    node_t *node = get_at_idx(list, idx);
    if (!node)
        return;
    node->data = apply_fcn(node->data);
    return;
}