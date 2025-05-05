#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int BY,BM,BD,CY,CM,CD,age;
void input(char str[]){
    printf("%s",str);
    scanf("%d%d%d%d%d%d",&BY,&BM,&BD,&CY,&CM,&CD);
}
int GAD(by,bm,bd,cy,cm,cd){
    age +=(cy-by)*365;
    age+=(cm-bm)*30;
    age+=(cd-bd);
    return age;
}
int main(){
    input("Enter values: ");
    printf("Age is: %d",GAD(BY,BM,BD,CY,CM,CD));
    return 0;
}