#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
    struct s_list *next;
    void          *data;
} t_list;

t_list *create_node(void *value)
{
    t_list *new_node = malloc(sizeof(t_list));
    if (!new_node)
        return NULL;

    new_node->next = NULL;
    new_node->data = value;

    return new_node;
}

int ft_list_size(t_list *begin_list)
{
    int count = 0;

    while (begin_list)
    {
        count++;
        begin_list = begin_list->next;
    }
    return count;
}

void print_list(t_list *head) {
    if (!head)
        return;

    while(head) {
        // we cast to a pointer integer and after that we take the value using the
        // outside *
        printf("%d\n", *(int *)head -> data);
        head = head -> next;
    }
}

int main(void)
{
    t_list *head = NULL;

    int *a = malloc(sizeof(int));
    int *b = malloc(sizeof(int));
    int *c = malloc(sizeof(int));

    *a = 1;
    *b = 2;
    *c = 3;

    t_list *node1 = create_node(a);
    t_list *node2 = create_node(b);
    t_list *node3 = create_node(c);

    head = node1;
    node1->next = node2;
    node2->next = node3;

    printf("%d\n", ft_list_size(head));

    print_list(head);

    return 0;
}
