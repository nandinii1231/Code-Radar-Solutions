#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        int j=n;
        while(j<=i){
            printf("* ");
            j--;
        }
        printf("\n");
        i++;
    }
    

    
}