#include<stdio.h>

double cube(double value); //function declartion

int main(){

    double num,result;
    printf("Enter Any Number for Finding Cube Value::");\
    scanf("%lf",&num);
    result=cube(num);//function call
    printf("Cube is=%.2lf",result);

return 0;
}

double cube (double value){   //function definition

double cube_value=(value*value*value);

return cube_value;
}
