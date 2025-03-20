#include<stdio.h>
int main(){
    int n,num,result;
    scanf("%d %d",&n,&num);
    result=num^(1<<n);
    printf("%d\n",result);
}