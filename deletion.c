#include <stdio.h>
int main(){

    int arr[100],n, pos;

    printf("Eter size of array : ");
    scanf("%d",&n);

    printf("Enter element of array : ");
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }

    printf("Enter delete index : ");
    scanf("%d",&pos);
    
    //deletion 
    for( int i=pos;i<n-1;i++){
        arr[i] = arr[i +1];
    }
    
    n--;

    printf("Array after deletion : \n");
    for( int i=0;i<n;i++){
        printf("%d \n",arr[i]);
    }
    return 0;
}