#include<stdio.h>
int main()
{
    float num1,num2,result;
    printf("enter two numbers : ");
    scanf("%f %f",&num1, &num2);

     result = num1 + num2;
printf("Your sum result is : %.2f\n",result);


     result = num1 - num2;
printf("Your sub result is : %.2f\n",result);


    result = num1 * num2;
printf("Your multi result is : %.2f\n",result);


    result = num1 / num2;

printf("Your div result is : %.2f\n",result);


return 0;


}
