#include <stdio.h>
#include <stdlib.h>

    struct queue{
        int size;
        int front;
        int rear;
        int* arr;
    };

int isFull(struct queue* p){
    if(p->rear == p->size - 1){
        return 1;
    }
    else    
        return 0;
}
int isEmpty(struct queue* p){
    if(p->front == p->rear){
        return 1;
    }
    else{
        return 0;    
    }
}

void enqueue(struct queue* q,int value){
    if(isFull(q)){
        printf("Queue Is Overflow\n");
    }
    else{
        q->rear++;
        q->arr[q->rear] = value;
        printf("%d Enqueued SuccessFully !!!\n",value);
    }
}
int dequeue(struct queue* q){
    int a = -1;
    if(isEmpty(q)){
        printf("Queue Is Underflow\n");
    }
    else{
        q->front++;
        int a = q->arr[q->front];
        printf("Dequeued SuccessFully !!!\n");
        return a;
    }
}
int peek(struct queue* q){
   if(isEmpty(q)){
        printf("Queue Is Empty\n");
   }
   else{
        return q->arr[q->front+1];
   }
}
void display(struct queue* q){
    for (int i=q->front+1;i<=q->rear;i++){
        printf("The Elements In Queue Is: %d\n",q->arr[i]);
    }
    
}


int main(){
    struct queue *q = (struct queue*)malloc(sizeof(struct queue));
    q->size = 10;
    q->front = q->rear = -1;
    q->arr = (int*)malloc(q->size * sizeof(int));
    
    enqueue(q,12);
    enqueue(q,42);
    enqueue(q,92);
    enqueue(q,36);
    
    printf("%d \n",dequeue(q));
    printf("%d \n",dequeue(q));
    printf("%d \n",dequeue(q));
 
    display(q);
    printf("Peek: %d",peek(q));
    
return 0;
}