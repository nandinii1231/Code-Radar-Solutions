#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c){
        printf("Equilateral\n");
    }
    if(a==b && a!=c){
        printf("Isosceles\n");
    }
    else if(a!=b && b!=c){
        printf("Scalene");
    }
 
}