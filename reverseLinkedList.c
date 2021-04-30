#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *createlist()
{
    struct ListNode *head,*node,*end;
    head = (struct ListNode*)malloc(sizeof(struct ListNode));
    int a[100];
    int n;
    int i =0;
    end = head;
    scanf("%d",&n);
    while(n!= -1){
        a[i] = n;
        i++;
        scanf("%d",&n);
    }
    i--;
    for(;i>=0;i--){
        node = (struct ListNode*)malloc(sizeof(struct ListNode));
        node->data = a[i];
        end->next = node;
        end = node;
    }
    end->next = NULL;
    return head->next;
}

int main()
{
    struct ListNode *p, *head = NULL;

    head = createlist();
    for ( p = head; p != NULL; p = p->next )
        printf("%d ", p->data);
    

    return 0;
}

/* 你的代码将被嵌在这里 */