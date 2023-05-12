#include<stdio.h>


int sub(int value1,int value2);

int main(){

     int i,j,subValue;
     printf("Enter two Values::");
     scanf("%d %d",&i,&j);
     subValue=sub(i,j);
     printf("Subtraction Value is::%d",subValue);

return 0;

}

int sub(int value1,int value2){

    int subtract=value1-value2;

     return subtract;

}
