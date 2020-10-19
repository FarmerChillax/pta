#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *getodd(struct ListNode **L);

void printlist(struct ListNode *L)
{
    struct ListNode *p = L;
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main()
{
    struct ListNode *L, *Odd;
    L = readlist();
    Odd = getodd(&L);
    printlist(Odd);
    printlist(L);

    system("pause");
    return 0;
}

/* 你的代码将被嵌在这里 */
struct ListNode *readlist()
{
    int temp, size = sizeof(struct ListNode);
    struct ListNode *head = (struct ListNode *)malloc(size);
    struct ListNode *point = head;
    scanf("%d", &temp);
    while (temp != -1)
    {
        struct ListNode *nowNode = (struct ListNode *)malloc(size);
        nowNode->data = temp;
        nowNode->next = NULL;
        point->next = nowNode;
        point = point->next;
        scanf("%d", &temp);
    }

    return head->next;
}
struct ListNode *getodd(struct ListNode **L){
    int size = sizeof(struct ListNode);
    struct ListNode *resHead = (struct ListNode *)malloc(size), *newHead = (struct ListNode *)malloc(size);
    struct ListNode *L_point = *L, *resPoint = resHead, *newPoint = newHead;
    
    while (L_point)
    {
        struct ListNode *tempNode = (struct ListNode *)malloc(size);
        tempNode->data = L_point->data;
        tempNode->next = NULL;
        if(L_point->data % 2 == 0){
            newPoint->next = tempNode;
            newPoint = newPoint->next;
        }else
        {
            resPoint->next = tempNode;
            resPoint = resPoint->next;
        }
        L_point = L_point->next;
    }

    *L = newHead->next;
    return resHead->next;   
}