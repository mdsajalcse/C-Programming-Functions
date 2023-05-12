#include<stdio.h>

int getMax(int num1, int num2);
int getMin(int num1, int num2);

int main(){

       int maximum,minimum;

       printf("Enter Two Numbers::");

       scanf("%d %d",&maximum, &minimum);

      int maximumValue=getMax(maximum,minimum);

      int minimumValue=getMin(maximum,minimum);

      printf("Maximum Value is:::%d\n",maximumValue);

      printf("Minimum Value is:::%d",minimumValue);


      return 0;

}

int getMax(int num1, int num2){

   int max=(num1>num2)?num1:num2;

    return max;

}
int getMin(int num1, int num2){

    int min=(num1>num2)? num2:num1;

    return min;
}


