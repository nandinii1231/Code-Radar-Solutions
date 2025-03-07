#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i=1;
    int value=i;
    while(i<=n){
        int j=1;
        while(j<=i){
        printf("%d",value);
        j=j+1;
        }
        value=value+1;
    }
    
    i=i+1;
}