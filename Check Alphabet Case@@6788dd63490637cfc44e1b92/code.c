#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch>=65 && ch<=90){
        printf("Uppercase");
            }
    else if(ch>=97 && ch<=107) {
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    
}