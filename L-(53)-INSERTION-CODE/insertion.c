#include <stdio.h>
#define n 7
int main(){
 
int a[7]  = {7,5,2,1,8,4,2};
// int a[7]  = {1,2,3,4,5,6,7};
for (int i=0;i<7;i++){
    printf("%d ",a[i]);
}
for (int i=0;i<n-1; i++){
    for (int j=1;j<n;j++){
        if(a[j] < a[j-1]){
            int temp = a[j];
            a[j] = a[j-1];
            a[j-1] = temp;
        }
    }
    
}
printf("\n");
for (int i=0;i<7;i++){
    printf("%d ",a[i]);
}
 
 
 
return 0;
}