#include <stdio.h>
#include <stdlib.h>

    struct node{
        int data;
        struct node* next;
    };

    void Traverse(struct node* ptr){
        while(ptr!=NULL){
            printf("Elements Are: %d\n",ptr->data);
            ptr = ptr->next;
        }
        printf("\n");
    }
    struct node* insertAtFront(struct node* head,int data){
        struct node* ptr = (struct node*)malloc(sizeof(struct node));
        ptr->next = head;
        ptr->data = data; 
        head = ptr;
        return head;
    }

    struct node* insertAtBetween(struct node* head,int data, int index){
        struct node* ptr = (struct node*)malloc(sizeof(struct node));
        struct node* p = head;
        int i = 0;
        while(i!=index-1){
            p = p->next;
            i++;
        }
        ptr->data = data;
        ptr->next = p->next;
        p->next = ptr;
        return head;
    }

    struct node* insertAtEnd(struct node* head,int data){
        struct node* ptr = (struct node*)malloc(sizeof(struct node));
        struct node* p = head;
        while(p->next != NULL){
            p = p->next;
        }
        ptr->data = data;
        p->next = ptr;
        ptr->next = NULL;
        return head;
    }

    struct node* insertAfterNode(struct node* head,struct node* prev,int data){
        struct node* ptr = (struct node*)malloc(sizeof(struct node));
        
        ptr->data = data;
        ptr->next = prev->next;
        prev->next = ptr;
        return head;
    }
    

int main(){
    struct node* head;
    struct node* second;
    struct node* third;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    head->data = 12;
    head->next = second;
    second->data = 22;
    second->next = third;
    third->data = 32;
    third->next = NULL;

    Traverse(head);
    // head = insertAtFront(head,44);
    // head = insertAtBetween(head,56,1);
    head = insertAtEnd(head,70);
    // head = insertAfterNode(head, second,40);
    Traverse(head);

 
 
 
 
return 0;
}