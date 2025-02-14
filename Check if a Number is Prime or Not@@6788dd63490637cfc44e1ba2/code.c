#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    (n<=1) ? printf(" Not Prime"):
    (n==2||n==3||n==5||n==7) ? printf("Prime"):
    (n%2==0||n%3==0||n%5==0||n%7==0) ? printf("Not Prime");    
}