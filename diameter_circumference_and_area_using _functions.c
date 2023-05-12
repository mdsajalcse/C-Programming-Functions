#include<stdio.h>
#include<math.h>
double diameter(double radius);///function declartion
double circumference(double radius);///function declartion
double area(double radius);///function declartion
int main(){
       double dia,cir,ar,rad;
       printf("Enter Radius Value=");
       scanf("%lf",&rad);

       dia=diameter(rad);    ///function call
       cir=circumference(rad); ///function call
       ar=area(rad); ///function call

       printf("Diameter is=%.2lf\n",dia);
        printf("Circumference is=%.2lf\n",cir);
         printf("Area is=%.2lf\n",ar);

return 0;

}
double diameter(double radius){  ///function definition
    double diameterValue=2*radius;
    return diameterValue;

}
double circumference(double radius){ ///function definition

    double circumferenceValue=2*3.14*radius;

    return circumferenceValue;

}
double area(double radius){  ///function definition

  double areaValue=3.14*(radius*radius);

   return areaValue;

}
