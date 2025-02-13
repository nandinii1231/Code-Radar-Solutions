#include<stdio.h>
int main(){
 char ch;
 scanf("%c",&ch);
 if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
    printf("Vowel\n");
 }  
 else if ((ch>=65 && ch<=90) || (ch>=97 && ch<=122)){
    printf("Consonant\n");
 }
 else if(ch>=48 && ch><=57){
    printf("Digit\n");
 }
 else{
    printf("Special Character");
 }
}