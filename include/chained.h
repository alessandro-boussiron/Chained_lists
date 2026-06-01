/*
** EPITECH PROJECT, 2026
** Chained_lists
** File description:
** chained
*/

#ifndef CHAINED_H_
    #define CHAINED_H_
    #include <stddef.h>

typedef struct node {
    void *data;
    struct node *previous;
    struct node *next;
} node_t;

#endif /* !CHAINED_H_ */
