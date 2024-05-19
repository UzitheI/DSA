#include<stdio.h>

int main(){
    int n,i;
    int *array;
    printf("Enter the number of blocks that you require:");
    scanf("%d",&n );
    
    array=(int*)malloc(n*sizeof(int));

    if(array= NULL){
        printf("Dynamic allocation failed");
    }
    for(i=0;i<n;i++){
        printf("a[%d]=", i);
        scanf("%d",&array[i]);
    }

    printf("Now, printing the array:");
    for(int i=0;i<n;i++){
        printf("a[%d]=%d", i, array[i]);
    }
    return 0;
}