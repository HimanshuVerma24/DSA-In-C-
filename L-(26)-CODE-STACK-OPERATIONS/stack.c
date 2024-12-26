#include <stdio.h>
#include <stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack* ptr){
    if(ptr->top == -1){
        return 1;
    }
    else 
    return 0;
}
int isFull(struct stack* ptr){
    if(ptr->top == ptr->size - 1){
        return 1;
    }
    else
    return 0;
}

void push(struct stack* ptr,int value){                    
    if(isFull(ptr)){                                       
        printf("Stack Is OverFlow Cannot Push: %d\n",value);
        return;                                             
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = value;
        printf("Element %d Inserted Sucessfully !!!\n",value);
    }
}

int pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("Stack Is Underflow Cannot Pop Value From Stack \n");
        return -1;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        printf("Element %d Deleted Sucessfully !!!\n",val);
        return val;
    }
}

int main(){
    struct stack *s = (struct stack*)malloc(sizeof(struct stack));
    s->size = 10;
    s->top = -1;
    s->arr = (int*)malloc(s->size *sizeof(int));
    
    // printf("%d\n",isEmpty(s));
    // printf("%d\n",isFull(s));

    push(s,1);
    push(s,2);
    push(s,3);
    push(s,4);
    push(s,5);
    printf("\n");
    pop(s);
    pop(s);
    pop(s);
 
    free(s->arr);
    free(s);
 
 
return 0;
}