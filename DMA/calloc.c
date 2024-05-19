#include<stdio.h>

int main(){
    int n, i;
    int *array;
    printf("Enter the number of blocks you want to allocate:");
    scanf("%d",&n );
    array= (int*)calloc(n,sizeof(int ));

    for(i=0;i<n;i++){
        printf("a[%d]=",i);
        scanf("%d",&array[i]);
    }

    for(i=0;i<n;i++){
        printf("a[%d]=%d\t",i, array[i]);
    }
    //free clears the space after it has been used before termination
    free(array);
    return 0;
}