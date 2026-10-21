#include<stdio.h>
int main(){
    int i, size, toSearch, found;
    scanf("%d", &size);
    int arr[size];
    for(i = 0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &toSearch);
    found = 0;
    for(i = 0; i<size; i++){
        if(arr[i] == toSearch){
            found = 1; 
            break;
        }
    }
    if(found == 1){
        printf("%d is found", toSearch);
    }
    else {
        printf("Not found");
    }
    return 0;
}