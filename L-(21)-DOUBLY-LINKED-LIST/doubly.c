#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
    struct node* prev;
};

    struct node* Traverse(struct node* head){
        struct node* p = head;
        while(p!=NULL){
            printf("Elements In DLL : %d\n",p->data);
            p = p->next;
        }


        // do{   
        //     printf("Elements In DLL : %d\n",p->data);
        //     p = p->next;
        // } while (p!=NULL);
        
        return head;
    }
    
    struct node* reverseTraverse(struct node* head){
        struct node* p = head;

    while(p->next!=NULL){
        p = p->next;
    }
  
    while(p!=NULL){       
        printf("Reverse Elements In DLL: %d\n",p->data);
        p = p->prev;
         
    }
    return head;
    }

int main(){
 
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));
    fifth = (struct node*)malloc(sizeof(struct node));

    head->data = 12;
    head->prev = NULL;
    head->next = second;
 
    second->data = 24;
    second->prev = head;
    second->next = third;
 
    third->data = 36;
    third->prev = second;
    third->next = fourth;
 
    fourth->data = 48;
    fourth->prev = third;
    fourth->next = fifth;

    fifth->data = 60;
    fifth->prev = fourth;
    fifth->next = NULL;


    Traverse(head);
    reverseTraverse(head);

    free(fifth);
    free(fourth);
    free(third);
    free(second);
    free(head);

return 0;
}