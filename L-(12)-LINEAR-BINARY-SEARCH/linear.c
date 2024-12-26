#include <stdio.h>
#include <stdbool.h>
int main(){

    int element,size;
    bool x = true;
    int arr[10] = {1,3,4,5,34,63,74,252,944,423};
    
    printf("Enter The Element To Search: ");
    scanf("%d",&element);

    size = sizeof(arr) / sizeof(int);

    for (int i=0;i<size; i++){
        if(arr[i]==element){
            printf("The Element Is At Index: %d And Element Is: %i",i,element );
            x = false;
        }
    }
    if(x==true){
        printf("Invalid Element");
    }
 
 
 
 
return 0;
}