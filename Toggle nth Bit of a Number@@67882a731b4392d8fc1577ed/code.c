#include<stdio.h>
int mmain(){
    int n,num,result;
    scanf("%d %d",&n,&num);
    result=num^(1<<n);
    printf("%d\n",result);
}