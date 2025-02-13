#include<stdio.h>
int main(){
 char ch;
 scanf("%c",&ch);
 if(ch==A,E,I,O,U,a,e,i,o,u){
    printf("Vowel");
 }  
 else if (ch<=65 && ch>=90 || ch<=97 && ch>=122){
    printf("Consonant");
 }
 else if(ch<=48 && ch>=57){
    printf("Digit");
 }
 else{
    printf("Special Character");
 }
}