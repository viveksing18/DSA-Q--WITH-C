#include <stdio.h>
int main(){
    //Insertion with take user input
    int arr[100],n,pos,value;

    printf("Enter sizr of array : ");
    scanf("%d",&n);

    printf("Enter array element : \n");
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter position: ");
    scanf("%d",&pos);

    printf("Enter value : ");
    scanf("%d",&value);

    // Element sifting code 
    for(int i = n; i>=pos;i--){
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = value;
    n++;

    printf("Elemant after insereation : ");
    for(int i = 0; i<n; i++){
        printf("%d ",arr[i]);
    }
     

    // insertion without take input

    // int arr[100] = {10,20,30,40,50};
    // int n = 5;
    // int index, value;

    // printf("Enter index : ");
    // scanf("%d",&index);

    // printf("Enter value : ");
    // scanf("%d",&value);


    // // for insertion :
    // for(int i=n;i>=index;i--){
    //     arr[i] = arr[i - 1];
    // }
    //   arr[index] = value;
    //   n++;

    //   printf("array element after insertion : ");
    //   for(int i=0;i<n;i++){
    //     printf("%d \n ",arr[i]);
    //   }

    return 0;
}