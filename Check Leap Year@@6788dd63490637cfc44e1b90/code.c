#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%4==0 && n%400){
        printf("Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
}