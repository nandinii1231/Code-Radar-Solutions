#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch=='A')
    printf("Excellent");
    if(ch=='B')
    printf("Good");
    if(ch=='C')
    printf("Average");
    if(ch=='D')
    printf("Below Average");
    if(ch=='F')
    printf("Fail");
    else if(ch!='A'||ch!='B'||ch!='C'||ch!='D'||ch!='F')
    printf("Invalid grade");

}