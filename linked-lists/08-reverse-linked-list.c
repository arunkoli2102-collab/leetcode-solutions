#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode* reverseList(struct ListNode* head)
{
    struct ListNode *prev = NULL;
    struct ListNode *current = head;

    while (current != NULL)
    {
        struct ListNode *nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }

    return prev;
}

void printList(struct ListNode *head)
{
    while (head != NULL)
    {
        printf("%d ", head->val);
        head = head->next;
    }
    printf("\n");
}

int main()
{
    /* Test Case 1: Normal list */
    struct ListNode n1 = {1, NULL};
    struct ListNode n2 = {2, NULL};
    struct ListNode n3 = {3, NULL};
    struct ListNode n4 = {4, NULL};
    struct ListNode n5 = {5, NULL};

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;

    struct ListNode *head1 = &n1;

    head1 = reverseList(head1);

    printf("Test Case 1: ");
    printList(head1);

    /* Test Case 2: Single node */
    struct ListNode n6 = {1, NULL};

    struct ListNode *head2 = &n6;

    head2 = reverseList(head2);

    printf("Test Case 2: ");
    printList(head2);

    return 0;
}