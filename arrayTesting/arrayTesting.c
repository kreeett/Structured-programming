#include<stdio.h>
int main(){
    int i[70] = {8,9,9,10};
    int len=0;
    while(i[len]!='\0'){len++;}
    printf("%d",len);
    return 0;
}