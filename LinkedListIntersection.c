#include <stdio.h>
#include <stdlib.h>
typedef struct number{
    int data;
    struct number *next;
}LinkList;

LinkList *create(){
    LinkList *head,*node,*end;
    int n;
    head = (LinkList*)malloc(sizeof(LinkList));
    end = head;
    scanf("%d",&n);
    while(n!=-1){
        node = (LinkList*)malloc(sizeof(LinkList));
        node->data = n;
        end->next = node;
        end = end->next;
        scanf("%d",&n);
    }
    end->next = NULL;
    return head->next;
}
// LinkList *intersect(LinkList *list1,LinkList *list2){
//     LinkList *p1 = list1,*p2 ,*end2;
//     LinkList *list3,*end,*node;
//     list3 = (LinkList*)malloc(sizeof(LinkList));
//     end = list3;
//     end2 = list2;
//     while(p1!=NULL){
//         p2 = end2;
//         while(p2!=NULL){
//             if(p2->data == p1->data){
//                 node = (LinkList*)malloc(sizeof(LinkList));
//                 node->data = p2->data;
//                 end->next = node;
//                 end = end->next;
//                 end2 = end2->next;
//                 break; 
//             }
//             p2 = p2->next;
//         }
//         p1 = p1->next;
//     }
//     end->next = NULL;
//     return list3;
// }
LinkList *intersect(LinkList *list1,LinkList *list2){
    LinkList *p1,*p2;
    LinkList *list3,*end,*node;
    list3 = (LinkList*)malloc(sizeof(LinkList));
    end = list3;
    p1 = list1;
    p2 = list2;
    while(p1!=NULL&&p2!=NULL){
        if(p1->data == p2->data){
            node = (LinkList*)malloc(sizeof(LinkList));
            node->data = p1->data;
            end->next = node;
            end = end->next;
            p1 = p1->next;
            p2 = p2->next;
        }
        else if(p1->data>p2->data){
            p2 = p2->next;
        }
        else if(p1->data<p2->data){
            p1 = p1->next;
        }
    }
    end->next = NULL;
    return list3;

}
void printlist(LinkList *head){
    LinkList *p;
    p = head;
    if(p->next==NULL){
        printf("NULL");
        return;
    }
    p = head->next;
    while(p->next!=NULL){
        printf("%d ",p->data);
        p = p->next;        
    }
    printf("%d",p->data);
    return;
}
int main(){
    LinkList *list1 = create();
    LinkList *list2 = create();
    LinkList *list3 = intersect(list1,list2);
    printlist(list3);
    return 0;
}