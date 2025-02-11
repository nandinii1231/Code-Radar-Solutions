#include<stdio.h>
int main(){
    int n,msb ;
    scanf("%d",&n);
    msb=n>>31&1;
    if(msb==1){
        printf("Set");
        }
    else{
        printf("Not Set");
    }
}