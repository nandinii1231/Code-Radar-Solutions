#include<stdio.h>
#include<math.h>
int main(){
    int radius;
    double area;
    
    scanf("%d",&radius);
    
    area=3.14*radius*radius;
    printf("Area: %.2lf",area);
    return 0;
}