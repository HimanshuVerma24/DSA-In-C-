#include <stdio.h>
 
 struct queue{
    int size;
    int front;
    int rear;
    int* arr;
 };

int main(){
    struct queue q;
    q.size = 10;
    q.front = q.rear = -1;
    q.arr = (int*)malloc(q.size * sizeof(int));



 
 
 
 
return 0;
}