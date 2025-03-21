#include<stdio.h>
int main(){
    int n,num,result;
    scanf("%d %d",&num,&n);
    result=num ^ (1<<n);
    printf("%d\n",result);
}