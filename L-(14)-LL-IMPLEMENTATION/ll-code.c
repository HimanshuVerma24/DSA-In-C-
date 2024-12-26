#include <stdio.h>
#include <stdlib.h>

 
 struct node{
        int data;
        struct node* next;
    };

  void LinkedListTraversal(struct node* ptr){
        while (ptr != NULL){
            printf("Element Is: %d\n",ptr->data);
            ptr = ptr->next;
        }
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
    fourth->next = NULL;

    LinkedListTraversal(head);
    
 
 
 
return 0;
}