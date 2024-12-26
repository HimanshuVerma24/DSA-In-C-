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
int match(char p,char s){
    if(p=='(' && s==')'){
        return 1;
    }
    if(p=='{' && s=='}'){
        return 1;
    }
    if(p=='[' && s==']'){
        return 1;
    }
    return 0;
}

int paranthesisMatch(char* exp){
    struct stack* s;
    char poped_char;
    s->size  = strlen(exp);
    s->top = -1;
    s->arr = (char* )malloc(s->size *  sizeof(char));

    for (int i=0;exp[i] != '\0'; i++){
        if(exp[i] == '('  || exp[i] == '{' || exp[i] == '['){
            push(s,exp[i]);
        }
        else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']'){
            if(isEmpty(s)){
                return 0;
            }
            else
            poped_char = pop(s);
            if(!match(poped_char,exp[i])){
                return 0;
            }
        }
        }   
        if(isEmpty(s)){
            return 1;
        }
        else{
            return 0;
        }
    }
    


int main(){
   
   char* exp = "((8){(9-8)})[]";

   if(paranthesisMatch(exp)){
    printf("Paranthesis Matching\n");
   }
   else{
    printf("Not Matching");
   }
   
 
 
return 0;
}