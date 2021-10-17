#include<stdio.h>
typedef struct student{
    float real;
    float imag;
} complex;
void addtwonumber(complex c1, complex c2, complex *result);

int main(){
    complex c1,c2,result;
    printf("Enter the value of \n");
    printf("Enter the real : ");
    scanf("%f",&c1.real);
    printf("Enter the imag : ");
    scanf("%f",&c1.imag);

    printf("Enter the value of c2\n");
   
    printf("Enter the real : ");
    scanf("%f",&c2.real);
    printf("Enter the imag : ");
    scanf("%f",&c2.imag);

    addtwonumber(c1, c2, &result);
    printf("\nresult of real c1+c2 : %.1f\n", result.real);
    printf("\nresult of imag c1+c2 : %.1f\n", result.imag);

    return 0;
}
void addtwonumber(complex c1, complex c2, complex *result){
    result->real = c1.real+c2.real;
    result->imag  = c1.imag +c2.imag;
}
