#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int data;
    struct ListNode *next;
};

struct ListNode *createlist()
{
    struct ListNode *head, *node, *end;
    int temp;
    head = (struct ListNode *)malloc(sizeof(struct ListNode));
    end = head;
    scanf("%d", &temp);
    while (temp != -1)
    {
        node = (struct ListNode *)malloc(sizeof(struct ListNode));
        node->data = temp;
        end->next = node;
        end = node;
        scanf("%d", &temp);
    }
    end->next = NULL;
    return head->next;
}
struct ListNode *reverse(struct ListNode *head){
    struct ListNode *p,*head_2=NULL;
    while(head!=NULL){
        
        p = (struct ListNode*)malloc(sizeof(struct ListNode));
        p->data = head->data;
        p->next = head_2;
        head_2 = p;
        head = head->next;       
    }
    return head_2;
}
// struct ListNode *reverse(struct ListNode *head)
// {
//     struct ListNode *node, *end,*p = head;
    
//     int a[10000];
//     int i=0;
//     while(p){
//         a[i] = p->data;
//         p = p->next;
//         i++;
//             }
//     end = head;
//     for(;i>=0;i--){
//         node = (struct ListNode *)malloc(sizeof(struct ListNode));
//         node->data = a[i];
//         end->next = node;
//         end = node;
//     }    
//     end->next = NULL;
//     return head->next->next;
// }
void printlist(struct ListNode *head)
{
    struct ListNode *p = head;
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main()
{
    struct ListNode *head;

    head = createlist();
    head = reverse(head);
    printlist(head);

    return 0;
}

/* 你的代码将被嵌在这里 */