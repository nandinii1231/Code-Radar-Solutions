#include<stdio.h>
int main(){
    int num,nthbit,n;
    scanf("%d %d",&num,&n);
    nthbit=num&~(1<<n);
    if(nthbit==1){
        printf("1");
    }
    else{
        printf("0");
    }
}
