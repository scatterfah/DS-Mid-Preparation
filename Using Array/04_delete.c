#include<stdio.h>
int main(){
    int i, size, value, position;
    scanf("%d",&size);
    int arr[size];
    for(i = 0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&value);
    position = -1;
    for(i = 0; i<size; i++){
        if(arr[i] == value){
            position = i;
            break;
        }
    }
    if(position != -1){
        for(i = position; i<size-1; i++){
            arr[i] = arr[i+1];   //Copy the previous element one step left
        }
        size--;
    }
    for(i = 0; i<size; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}