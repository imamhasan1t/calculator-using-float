//a calculator which is can give sum,sub,multi,divion and reminder 

#include<stdio.h>
int main()
{
    int num1,num2,result;
    printf("enter two numbers : ");
    scanf("%d %d",&num1, &num2);

     result = num1 + num2;
printf("Your sum result is : %d\n",result);


     result = num1 - num2;
printf("Your sub result is : %d\n",result);



    result = num1 * num2;
printf("Your multi result is : %d\n",result);


float a = num1;
float b = num2;
float fahim;



    fahim = a / b;

printf("Your div result is : %.2f\n",fahim);

result = num1 % num2;
printf("Your reminder is : %d\n",result);


return 0;

