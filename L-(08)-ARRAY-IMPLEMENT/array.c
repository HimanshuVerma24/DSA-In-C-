#include <stdio.h>
#include <stdlib.h>
 
typedef struct array{
    int total_size;
    int used_size;
    int *ptr;
 }Data;

   void CreateArray(Data *a,int tsize, int usize){
        a->total_size = tsize;
        a->used_size = usize;
        a->ptr = (int*)malloc(tsize * sizeof(int));
   }
   void get(Data *a){
        for (int i=0;i<a->used_size;i++){
            printf("Enter The %d Element: ",i+1);
            scanf("%d",&(a->ptr)[i]);
        }
   }
    void show(Data *a){
        printf("The Total Size Is: %d\n",a->total_size);
        printf("The Used Size Is: %d\n",a->used_size);
        for (int i=0;i<a->used_size;i++){
            printf("The %d Element Is: %d\n",i+1,(a->ptr)[i]);
        }
    }

int main(){
    
    Data marks;
    CreateArray(&marks, 10, 3);
    get(&marks);
    printf("\n");
    show(&marks);
    
 
 
return 0;
}