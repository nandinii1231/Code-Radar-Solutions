#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i=1;
    int star='*';
    while(i<=n){
        int j=1;
        while(j<=i){
            printf("star ");
            star--;
            j++;
        }
        printf("\n");
        
        i++;
    }
    

    
}