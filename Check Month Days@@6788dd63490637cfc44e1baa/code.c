#include<stdio.h>
int main(){
    int n;
    scanf("%n",&n);
    if(n==1||n==3||n==5||n==7||n==8||n==10||n==12)
    printf("31");
    else if(n==2||n==4||n==6||n==9||n==11)
    printf("30");
    else
    printf("Invalid month");
}