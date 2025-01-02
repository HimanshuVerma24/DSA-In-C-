#include <stdio.h>

void printArray(int *a,int n){
    for (int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
int partition(int a[], int low, int high){
    int pivot = a[low];
    int i = low+1;
    int j = high;

    do{
    while(a[i] <= pivot){
        i++;
    }
    while(a[j] > pivot){
        j--;
    }
    if(i<j){
        int temp  = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    }while( i < j );
    
        int temp  = a[low];
        a[low] = a[j];
        a[j] = temp;
        return j;

}
void quickSort(int *a,int low,int high){
    int partitionIndex; // Index Of Pivot After Partition
    // Here PartitionIndex Means The Pivot Element Are Reach At Correct Position

    if(low<high){
    partitionIndex = partition(a, low, high);
        quickSort(a ,low, partitionIndex-1); // Sort Left Subarray
        quickSort(a,partitionIndex+1,high); // Sort Right Subarray
    }
}

int main(){
int n = 7;
int a[7] = {7,6,5,4,3,2,1};
// int a[7] = {1,2,3,4,5,6,7};
printArray(a,n);
printf("\n");
quickSort(a,0,n-1);
printArray(a,n);

    
 
 
 
 
return 0;
}