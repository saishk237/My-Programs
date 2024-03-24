#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void printList(struct Node* head)
{
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
}

void printReverse(struct Node* head)
{
    if (head == NULL) {
        return;
    }

    printReverse(head->next);
    printf("%d ", head->data);
}

int isPrime(int n)
{
    int i;

    if (n <= 1) {
        return 0;
    }

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

void insertNode(struct Node* x, struct Node* y, int val)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = val;

    int smallest_prime = -1;
    struct Node* current_node = x;
    while (current_node != y) {
        if (current_node->data < y->data && isPrime(current_node->data)) {
            if (smallest_prime == -1 || current_node->data < smallest_prime) {
                smallest_prime = current_node->data;
            }
        }

        current_node = current_node->next;
    }

    if (smallest_prime != -1) {
        new_node->data = smallest_prime;
    }

    new_node->next = y;
    x->next = new_node;
}

void reverseList(struct Node** head_ref)
{
    struct Node* prev = NULL;
    struct Node* current = *head_ref;
    struct Node* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *head_ref = prev;
}

int main()
{
    struct Node* head = NULL;

    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);

    printf("Reversed linked list: ");
    printReverse(head);
    printf("\n");

    reverseList(&head);

    insertNode(head->next, head->next->next->next, 0);

    printf("Modified linked list: ");
    printList(head);
    printf("\n");

    return 0;
}
