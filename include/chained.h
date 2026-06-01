/*
** EPITECH PROJECT, 2026
** Chained_lists
** File description:
** chained
*/

#ifndef CHAINED_H_
    #define CHAINED_H_
    #include <stddef.h>
    #include <stdbool.h>

typedef struct node {
    void *data;
    struct node *previous;
    struct node *next;
} node_t;

// Utils
node_t *create_node(void *data);
void remove_node(node_t *node);

// List addings
void pop_node(node_t **list, node_t *data);
void app_node(node_t **list, node_t *data);

// List deletion
void remove_at(node_t **list, size_t idx);
void list_destroy(node_t **list);

// Node retrieves
node_t *get_tail(node_t *list);
node_t *get_at_idx(node_t *list, size_t idx);
node_t *find_node(node_t *list, bool (*compare)(void *data, void *to_compare), void *to_compare);

#endif /* !CHAINED_H_ */
