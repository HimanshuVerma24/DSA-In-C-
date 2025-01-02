#include <stdio.h>
 
    void printfArray(int *a,int n){
        for (int i=0;i<n;i++){
            printf("%d ",a[i]);
        }
    }

    void merge(int a[],int mid, int low, int high){
        int i , j , k , b[20];
        i = low;
        j = mid+1;
        k = low;

        while(i<=mid && j<=high){

            if(a[i]<a[j]){
                b[k] = a[i];
                i++; k++;
            }
            else{
                b[k] = a[j];
                k++; j++;
            }
        }
        // If Our One Array Will Be Empty Then. 
        while(i<=mid){
            b[k] = a[i];
            k++; i++;
        }
        while(j<=high){
            b[k] = a[j];
            k++; j++;
        }
        for (int i=low;i<=high;i++){
            a[i] = b[i];
        }
        
    }
        void mergeSort(int a[],int low, int high){
            int mid;
            if(low<high){ // Minimum 2 Element Are Present
               mid = (low+high)/2;
                mergeSort(a, low ,mid);
                mergeSort(a, mid+1 ,high);
                merge(a, mid, low, high);
            }
    }

int main(){
 int a[] = {9 ,14, 4, 8, 7, 5, 6};
 int n = 7;
 printfArray(a,n);
 printf("\n");
 mergeSort(a,0,6);
 printfArray(a,n);
 
 
 
 
return 0;
}