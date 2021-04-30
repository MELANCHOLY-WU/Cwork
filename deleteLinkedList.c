#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int data;
    struct ListNode *next;
};

struct ListNode *readlist(){
    struct ListNode *head,*node,*end;
    int temp;
    head = (struct ListNode*)malloc(sizeof(struct ListNode));
    end = head;
    scanf("%d",&temp);
    while(temp!=-1){
        node = (struct ListNode*)malloc(sizeof(struct ListNode));
        node->data = temp;
        end->next = node;
        end = node;
        scanf("%d",&temp);
    }
    end->next = NULL;
    return head->next;


}
struct ListNode *deletem(struct ListNode *L, int m){
    struct ListNode *present = L,*before;
    while(L!=NULL&&L->data == m){
        L = L->next;
    }if(L!=NULL){
        before = (struct ListNode*)malloc(sizeof(struct ListNode));
    while(present != NULL){
        if(present->data == m){
            struct ListNode *temp;
            temp = present;            
            before->next = temp->next; 
            present = before->next;           
            free(temp);
        }
        else{
            before = present;
            present = present->next;
        }
        
    }
    
    
    
    }
    
    return L;

}
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
    int m;
    struct ListNode *L = readlist();
    scanf("%d", &m);
    L = deletem(L, m);
    printlist(L);

    return 0;
}

/* 你的代码将被嵌在这里 */