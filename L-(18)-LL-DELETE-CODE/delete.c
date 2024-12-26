#include <stdio.h>
#include <stdlib.h>
 
 struct node{
    int data;
    struct node* next;
 };

    void Display(struct node* ptr){
        while(ptr!=NULL){
            printf("Element Is: %d\n",ptr->data);
            ptr = ptr->next;
        }
        printf("\n");
    }

    struct node* DeleteFromFront(struct node* head){
        struct node* p = head;
        head = head->next;
        free(p);
        return head;
    }

    struct node* DeleteFromBetween(struct node* head,int index){
        struct node* p = head;
        struct node* q = p->next; // head->next <-- It Will Work Same. 
        int i = 0;
        while(i!= index-1){
            p = p->next;
            q = q->next;
            i++;
        }
        p->next = q->next;
        free(q);
        return head;
    }

    struct node* DeleteLastNode(struct node* head){
        struct node* p = head;
        struct node* q = p->next;
        while(q->next!=NULL){
            q = q->next;
            p = p->next;
        }
        p->next = NULL;
        free(q);
        return head;
    }
    
    struct node* DeleteAfterNode(struct node* head,int value){
        struct node* p = head;
        struct node* q = p->next;

        while(q->next!=NULL && q->data!=value){
            p = p->next;
            q = q->next;
        }
        if (q->data == value){
            p->next = q->next;
            free(q);
        }
        return head;
    }

int main(){
 
 struct node* head;
 struct node* second;
 struct node* third;
 struct node* fourth;
 struct node* fifth;

head = (struct node*)malloc(sizeof(struct node));
second = (struct node*)malloc(sizeof(struct node));
third = (struct node*)malloc(sizeof(struct node));
fourth = (struct node*)malloc(sizeof(struct node));
fifth = (struct node*)malloc(sizeof(struct node));

    head->data  = 1;
    head->next = second;
    second->data  = 2;
    second->next  = third;
    third->data  = 3;
    third->next = fourth;
    fourth->data  = 4;
    fourth->next = fifth;
    fifth->data = 5;
    fifth->next = NULL;

    Display(head);
    // head = DeleteFromFront(head);
    // DeleteFromBetween(head,2);
    // head = DeleteLastNode(head);
    head = DeleteAfterNode(head,2);
    Display(head);
 
 
return 0;
}