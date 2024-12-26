#include <stdio.h>
 
    void display(int arr[],int size){
        for (int i=0;i<size;i++){
            printf("%d ",arr[i]);
        }
    }
    int insert(int arr[], int element, int index, int capacity, int size){
        if(size>=capacity){
            return -1;
        }
        else{
            for (int i = size-1;i>=index;i--){
                arr[i+1] = arr[i];
            }
            arr[index] = element;
            return 1;
        }
    }

int main(){
    int element,index,size = 5,capacity = 10;
    int arr[10] = {7, 8, 12, 27, 88};
    printf("Enter The Element : ");
    scanf("%d",&element);
    printf("Enter The Index To Be Insert: ");
    scanf("%i",&index);
    display(arr,size);

   int x = insert(arr,element,index,capacity,size);
   if (x==1){
    printf("\nElement Add Successfully!\n");
   }
   else if(x==-1){
    printf("\nMax Limit Reached\n");
   }
   size += 1;
   // size = size + 1 ;
   display(arr,size);
   
 
 
 
return 0;
}