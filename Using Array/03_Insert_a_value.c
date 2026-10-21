#include<stdio.h>
int main(){
    int size, i, value, position;
    scanf("%d",&size);
    int arr[size];
    for(i = 0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&position, &value);   //5
    for(i = size; i>position; i--){    // 3
        arr[i] = arr [i-1];   // Copy the previous element one step right
    }
    arr[position] = value;
    size++;
    for(i = 0; i<size; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
