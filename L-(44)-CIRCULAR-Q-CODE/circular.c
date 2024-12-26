#include <stdio.h>
#include <stdlib.h>

    struct circularQueue{
        int size;
        int front;
        int rear;
        int* arr;
    };

int isFull(struct circularQueue* p){
    if((p->rear+1)%p->size == p->front){
        return 1;
    }
    else    
        return 0;
}
int isEmpty(struct circularQueue* p){
    if(p->rear == p->front){
        return 1;
    }
    else{
        return 0;    
    }
}

void enqueue(struct circularQueue* q,int value){
    if(isFull(q)){
        printf("Queue Is Overflow\n");
    }
    else{
        q->rear = (q->rear + 1) % q->size;
        q->arr[q->rear] = value;
        printf("%d Enqueued SuccessFully !!!\n",value);
    }
}
int dequeue(struct circularQueue* q){
    int a = -1;
    if(isEmpty(q)){
        printf("Queue Is Underflow\n");
    }
    else{
        q->front = (q->front+1)%q->size;
        int a = q->arr[q->front];
        printf("Dequeued SuccessFully !!!\n");
        return a;
    }
}
int peek(struct circularQueue* q){
   if(isEmpty(q)){
        printf("Queue Is Empty\n");
   }
   else{
        return q->arr[q->front+1];
   }
}
void display(struct circularQueue* q){
    if(isEmpty(q)){
        printf("Queue Is Empty\n");
    }
    else{
    for (int i=q->front+1;i<=q->rear;i++){
        printf("The Elements In Queue Is: %d\n",q->arr[i]);
    }
    }
}


int main(){
    struct circularQueue *q = (struct circularQueue*)malloc(sizeof(struct circularQueue));
    q->size = 4;
    q->front = q->rear = 0; // It Will Reserve a Block For Store 0 That's Why If Queue Of 4 Will Store 3 Elements. 
    // Here We Use 0  Because IsFull Condition Will Not Satisfy. 
    q->arr = (int*)malloc(q->size * sizeof(int));
    
    enqueue(q,12);
    enqueue(q,42);
    enqueue(q,92);
    
    printf("%d \n",dequeue(q));
    printf("%d \n",dequeue(q));
    // printf("%d \n",dequeue(q));
    // printf("%d \n",dequeue(q));
    
    display(q);
    // printf("Peek: %d",peek(q));
    
return 0;
}