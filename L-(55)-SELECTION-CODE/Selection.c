#include <stdio.h>
#include <limits.h>
int main(){
    int n = 7;
    int arr[7]  = {7,6,5,4,3,2,1};
    printf("Unsorted Array\n");
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    for (int i=0;i<n-1;i++){
        int max = INT_MAX;
        int mindex = -1;
        for (int j=i;j<n;j++){
            if(max > arr[j]){
                max = arr[j];
                mindex = j;
            }
        }
            int temp  = arr[i];
            arr[i] = arr[mindex];
            arr[mindex] = temp;
    }
    printf("\nSorted Array\n");
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
 
 
 
 
return 0;
}
