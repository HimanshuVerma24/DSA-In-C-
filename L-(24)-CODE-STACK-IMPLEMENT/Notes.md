// Code

#include <stdio.h>
#include <stdlib.h>

struct stack {
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack* ptr) {
    if(ptr->top == -1)
    return 1; 
}

int isFull(struct stack* ptr) {
    if(ptr->top == ptr->size - 1)
    return 1;
}

int main() {
    struct stack *s = (struct stack*)malloc(sizeof(struct stack)); // Allocate memory for the stack
    s->size = 80;
    s->top = -1;
    s->arr = (int*)malloc(s->size * sizeof(int)); // Allocate memory for the stack array

    // Pushing Element Manually. 
    // s->arr[0] = 1;
    // s->top++;
    
    // Check if the stack is empty
    if(isEmpty(s)) {
        printf("Stack Is Empty\n");
    } else {
        printf("Stack Is Not Empty\n");
    }

  
    return 0;
}