#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
} Node;
void display(Node *head)
{
    while (head != NULL)
    {
        printf("%d \t", head->data);
        head = head->next;
    }
}
int main()
{
    Node *head, *first, *second;
    head = (Node *)malloc(sizeof(Node));
    first = (Node *)malloc(sizeof(Node));
    second = (Node *)malloc(sizeof(Node));
    head->data = 10;
    head->next = first;
    first->data = 20;
    first->next = second;
    second->data = 30;
    second->next = NULL;
    display(head);
}