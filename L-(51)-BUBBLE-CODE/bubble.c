#include <stdio.h>
#define n 7
#include <stdbool.h>
int main(){
    bool flag = true;
    int arr[7] = {7,6,5,4,3,2,1};
    printf("Enter The Elements In The Array \n");
    for (int i=0;i<n;i++){
        printf("Enter The %d Element In Array: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Array Is: \n");
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    for (int i=0;i<n-1;i++){ // Passes
        for (int j=0;j<n-1-i;j++){ // Swaping, Here i Is Used Because We Do Not Check In Sorted Array.
            if(arr[j+1] < arr[j]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                flag = false;
            }
        }
        if(flag == true){
            printf("\nArray Is Already Sorted\n");
            break;
        }
    }
        if(flag == false){
    printf("\nSorted Array \n");
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
        }
 
 
 
return 0;
}