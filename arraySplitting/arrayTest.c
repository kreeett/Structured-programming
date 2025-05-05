#include<stdio.h>
#define S 4
int main(){
    int i;
    int array[4]= {1,4,7,3};
    int array2[4]={0,0,0,0};
    for(int i =0;i<S/2;i++){
        array2[i]=array[i];
        array[i]=array[i+S/2];
        array[i+S/2]=0;
    }
    for(int j=0;j<2;j++){
        printf("%d\n",array2[j]);
    }
    return 0;
}