#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define n 8

void printArray(int *a,int size){
    for(int i=0;i<size;i++){
        printf("%i ",a[i]);
    }
}

int maximum(int a[],int size){
    int max = INT_MIN;
    for (int i=0;i<size;i++){
        if(max < a[i]){
            max = a[i];
        }
    }
    return max;
}

void countSort(int *a,int size){
    int i,j;
    //Find Max Element In a.
    int max = maximum(a,size);

    int* count = (int*)calloc(max+1 , sizeof(int));

    for (int i=0;i<n; i++){
    count[a[i]] = count[a[i]] + 1;
    }
    i = 0; // Counter For Count Array.
    j = 0; // Counter for Given Array. 

    while(i<=max){
        if(count[i]>0){
            a[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else{
            i++;
        }
    }
free(count);
}

int main(){
int a[] = {43,97,42,65,12,93,47,52};
printArray(a,n);
printf("\n");
countSort(a,n);
printArray(a,n);
return 0;
}