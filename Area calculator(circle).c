#include<stdio.h>
int main(){
    float radius;
    printf("enter radius: ");
    scanf("%f",&radius);

    printf("Area is : %f",3.14*radius*radius);
    printf("\nCircumference is : %f",2*3.14*radius);
    
    return 0;

}