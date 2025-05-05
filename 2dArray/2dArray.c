#include<stdio.h>
#define i 0
void fun(int arr[],int n){
    if(n==1){printf("%d\n",arr[0]);}
    else{fun(arr,n-1);
    printf("%d\n",arr[n-1]);}
    printf("%d",i);
}
int main(){
    int arr[7] = {1,2,3,4,56,7,8};
    return 0;
}