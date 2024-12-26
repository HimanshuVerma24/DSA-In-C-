#include <stdio.h>
#include <stdlib.h>

 
 struct node{
        int data;
        struct node* next;
    };

  void LinkedListTraversal(struct node* head){
        struct node* p = head;
        do{
            printf("Element Is: %d\n",p->data);
            p = p->next;
        }while(p!= head);
    }

    struct node* insertAtFront(struct node* head,int data){
        struct node* ptr = (struct node*)malloc(sizeof(struct node));
        struct node* p = head;
        struct node* q = p->next;

        while(q->next != head){
            q = q->next;
            p = p->next;
        }

        ptr->data = data;
        q->next = ptr;
        ptr->next = head;
        head = ptr;
        return head;

    }

int main(){
 
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));

    // Head Node Address And Data.
    head->data = 24;
    head->next = second;

    second->data = 34;
    second->next = third;

    third->data = 86;
    third->next = fourth;

    fourth->data = 74;
    fourth->next = head;

    printf("Circular LL Before Insertion\n");
    LinkedListTraversal(head);
    head = insertAtFront(head,100);
    printf("Circular LL After Insertion\n");
    LinkedListTraversal(head);
 
 
 
return 0;
}