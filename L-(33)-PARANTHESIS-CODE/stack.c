#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack{
    int size;
    int top;
    char *arr;
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

char pop(struct stack* s){
    if(isEmpty(s)){
        printf("Stack Is Underflow\n");
    }
    else{
        char val = s->arr[s->top];
        s->top--;
        return val;
    }
}
void push(struct stack* s,char val){
    if(isFull(s)){
        printf("Stack Is Overflow\n");
    }
    else{
        s->top++;
        s->arr[s->top] = val;
    }
}

int paranthesisMatch(char* exp){
    struct stack* s;
        
    s->size  = strlen(exp);
    s->top = -1;
    s->arr = (char* )malloc(sizeof(char));

    for (int i=0;exp[i] != '\0'; i++){
        if(exp[i] == '('){
            push(s,'(');
        }
        else if(exp[i] == ')'){
            if(isEmpty(s)){
                return 0;
            }
            else
            pop(s);
        }}
        if(isEmpty(s)){
            return 1;
        }
        else{
            return 0;
        }
    }
    


int main(){
   
   char* exp = "((8 (+) 9)) +";

   if(paranthesisMatch(exp) == 1){
    printf("Paranthesis Matching\n");
   }
   else{
    printf("Not Matching");
   }
   
 
 
return 0;
}