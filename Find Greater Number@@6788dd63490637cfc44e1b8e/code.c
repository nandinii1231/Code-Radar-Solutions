#include<stdio.h>
int mai(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a<b){
        printf("%d",b);
    }
    else{
        printf("%d",a);
    }
}