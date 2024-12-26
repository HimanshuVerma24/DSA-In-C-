#include <stdio.h>
 
 void display(int arr[],int size){
    for (int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
 }
 void delete(int arr[],int index,int capacity,int size){
    if(index>=capacity)
    printf("Cannot Be Delete %d Is Invalid Index",index);
    for (int i=index;i<size-1;i++){
        arr[i] = arr[i+1];
    }
 }
    


int main(){
    int element,index,size = 5,capacity = 10;
    int arr[10] = {7, 8, 12, 27, 88};
    display(arr,size);
    printf("\n");
    printf("Enter The Index To Delete: ");
    scanf("%i",&index);

    delete(arr,index,capacity,size);
    size -= 1;
    // size = size - 1 ;
    display(arr,size);
   
 
 
 
return 0;
}