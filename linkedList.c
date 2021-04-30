#include <stdio.h>
#include <stdlib.h>

typedef struct student
{ //声明一个结构体,next为一个结构体指针
    int score;
    struct student *next;
} LinkList;
/* 
create初始化一个链表,n为链表节点数
 */
LinkList *create(int n)
{
    LinkList *head, *node, *end;
    head = (LinkList*)malloc(sizeof(LinkList));
    end = head;
    for (int i = 0; i < n; i++)
    {   node = (LinkList*)malloc(sizeof(LinkList));
        scanf("%d", &node->score);
        end->next = node;
        end = end->next;
    }
    end->next = NULL;
    return head;
}

int main()
{
    LinkList *h = create(3);
    while (h != NULL)
    {
        h = h->next;
        printf("%d", h->score);
        
    }

    return 0;
}
