
#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
} Node;

void display(Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d  \n", ptr->data);
        ptr = ptr->next;
    }
}
Node *deleteAtFirst(Node *head)
{
    Node *ptr;
    ptr = (Node *)malloc(sizeof(Node));
    ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
Node *insertAtFirst(Node *head)
{
    Node *ptr;
    ptr = (Node *)malloc(sizeof(Node));
    ptr->data = 500;
    ptr->next = head;
    head = ptr;
    return ptr;
}
int main()
{
    int n;
    char ch;

    Node *p, *q, *r;
    p = (Node *)malloc(sizeof(Node));
    q = (Node *)malloc(sizeof(Node));
    r = (Node *)malloc(sizeof(Node));

    p->data = 100;
    p->next = q;
    q->data = 200;
    q->next = r;
    r->data = 300;
    r->next = NULL;

    do
    {
        printf("1.Traverse \n2. Insert node att first \n3. Delete node from first \n4.Exit \n");
        printf("Enter your choice : ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            display(p);

            break;
        case 2:
            printf("Before Insert \n");
            display(p);
            printf("After Insert \n");
            p = insertAtFirst(p);
            display(p);
            break;
        case 3:
            printf("Before Delete \n");
            display(p);
            printf("After Delete \n");
            p = deleteAtFirst(p);
            display(p);
            break;
        case 4:
            exit(0);
            break;
        default:
            break;
        }
        printf("Do you want to continue : ");
        scanf(" %c", &ch);
    } while (ch == 'y');
    return 0;
}