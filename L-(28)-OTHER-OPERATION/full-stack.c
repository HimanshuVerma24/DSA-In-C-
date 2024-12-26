#include <stdio.h>
#include <stdlib.h>

typedef struct Data{
    int size;
    int top;
    int *arr;
}stack;

int isFull(stack* ptr){
    if(ptr->top == ptr->size - 1){
        return 1;
    }
    else 
        return 0;
}

int isEmpty(stack* ptr){
    if(ptr->top == -1){
        return 1;
    }
    else
        return 0;
}

void Push(stack* s){
    int value;
    printf("Enter The Value: ");
    scanf("%d",&value);
    if(isFull(s)){
        printf("Stack Is Overflow %d Cannot Be Inserted\n",value);
    }
    else{
        s->top++;
        s->arr[s->top] = value;
        printf("Element %d Inserted Sucessfully !!!\n",value);
    }
}

int Pop(stack* s){
     if(isEmpty(s)){
        printf("Stack Is Underflow Element Cannot Be Delete\n");
    }
    else{
        int val = s->arr[s->top];
        s->top--;
        printf("Element %d Deleted Sucessfully !!!\n",val);
        return val;
    }
}
int Peek(stack* s,int i){
    int arrInd = s->top - i + 1;
    if(arrInd < 0){
        printf("Invalid Position Entered i.e :%d",i);
        return -1;   
    }
    else{
        return s->arr[arrInd];
    }
}
int Top(stack* ptr){
    return ptr->arr[ptr->top];
}

int Bottom(stack* ptr){
    return ptr->arr[0];
}
void display(stack* s){
    for (int i=1;i<=s->top + 1;i++){
        printf("The Element At Position: %d Is %d\n",i,Peek(s,i));
    }
}

int main(){
    
    stack *s = (stack*)malloc(sizeof(stack));
    s->size = 10;
    s->top = -1;
    s->arr = (int*)malloc(s->size * sizeof(int));


    while(1){
    printf("===== STACK OPERATIONS =====\n");
    printf("(1) Push\n");
    printf("(2) Pop\n");
    printf("(3) Peek\n");
    printf("(4) Top\n");
    printf("(5) Bottom\n");
    printf("(6) Display\n");
    printf("(7) Exit\n");
    
    int choice;
    printf("Enter Your Choice: ");
    scanf("%d",&choice);
    
    switch(choice){
        case 1:{
            Push(s);
            break;
        }
        case 2:{
          int x  = Pop(s);
          printf("The Deleted Value Is:%d\n",x);
            break;
        }
        case 3:{
            int i;
            printf("Enter The Position Of Element: ");
            scanf("%d",&i);
            int x = Peek(s,i);
            printf("The Value At Position %d Is %d\n",i,x);
            break;
        }
        case 4:{
            int y = Top(s);
            printf("The Top-most Element Of Stack Is: %d\n",y);
            break;
        }
        case 5:{
            int z = Bottom(s);
            printf("The Bottom-most Element Of Stack Is: %d\n",z);
            break;
        }
        case 6:{
            display(s);
            break;
        }
        case 7:{
            printf("Exiting....\n");
            free(s->arr);
            free(s);
            return 0;
        }
        default:
            printf("Invalid Choice\n");
            break;
    }
}
 
 
return 0;
}