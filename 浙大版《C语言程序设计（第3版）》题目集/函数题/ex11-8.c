#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *deletem( struct ListNode *L, int m );
void printlist( struct ListNode *L )
{
     struct ListNode *p = L;
     while (p) {
           printf("%d ", p->data);
           p = p->next;
     }
     printf("\n");
}

int main()
{
    int m;
    struct ListNode *L = readlist();
    scanf("%d", &m);
    L = deletem(L, m);
    printlist(L);

    system("pause");

    return 0;
}

/* 你的代码将被嵌在这里 */
struct ListNode *readlist(){
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

struct ListNode *deletem( struct ListNode *L, int m ){
    struct ListNode *p = L, *front_p = L;
    while (p)
    {
        if(p->data == m){
            if(L == p){
                L = L->next;
                p = L;
                front_p = L;
                continue;
            }else
            {
                front_p->next = p->next;
                p = p->next;
                continue;
            }
        }
        front_p = p;
        p = p->next;
    }
    return L;
}