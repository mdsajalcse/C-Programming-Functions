#include<stdio.h>

int sum(int value_1, int value_2);


int main(){

      int add,num1,num2;
      printf("Enter First Value: ");
      scanf("%d",&num1);
      printf("Enter Second Value: ");
      scanf("%d",&num2);

      add=sum(num1,num2);

      printf("Total Sum= %d",add);

return 0;

}
int sum(int value_1, int value_2)
{

    int total=value_1+value_2;

    return total;
}
