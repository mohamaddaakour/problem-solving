#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
    struct s_list *next;
    void *data;
} t_list;

t_list *create_node(void *value) {
    t_list *new_node = (t_list *)malloc(sizeof(t_list));
    if (!new_node) {
        return NULL;
    }

    new_node -> data = value;
    new_node -> next = NULL;

    return new_node;
}

int ft_list_size(t_list *head) {
    int count = 0;

    while (head) {
        count++;
        head = head -> next;
    }
    return count;
}

void ft_print(t_list *head) {
    while (head) {
        printf("%d\n", *(int *)(head -> data));
        head = head -> next;
    }
}

void plus_one(void *ptr) {
    (*(int *)ptr)++;
}

void ft_foreach(t_list *head, void (*f)(void *)) {
    while(head) {
        f(head -> data);
        head = head -> next;
    }
}

int main(void) {
    t_list *head = NULL;

    int *a = (int *)malloc(sizeof(int));
    int *b = (int *)malloc(sizeof(int));

    *a = 2;
    *b = 3;

    t_list *node1 = create_node(a);
    t_list *node2 = create_node(b);

    head = node1;
    node1 -> next = node2;

    printf("%d\n", ft_list_size(head));

    ft_foreach(head, plus_one);

    ft_print(head);

    return 0;
}