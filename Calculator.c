#include<stdio.h>
#include<float.h>

int main(){
  char operator;
  double a,b,result;
  printf("Enter the value of a and b:\n");
  scanf("%lf%lf",&a,&b);
  printf("Enter the operator you want to perform:(+,-,*,/,%)\n");
  scanf("%c",&operator);

  switch(op){
  case'+':
  result = a + b;
  printf("The addition of two is %lf\n",result);
  break;
  case'-':
  result=a-b;
  printf("The subtraction of a and b is %lf\n",result);
  break;
case '*':
  result=a*b;
  printf("The multiplication of a and b is %lf\n",result);
  break;
case '/':
  result=a/b;
  printf("The Division of a and b is %lf\n",result);
  break;
case'%':
  result=a%b;
  printf("The Remainder after divinding a and b is %lf\n",result);
  break;
default:
printf("Invalid operator!! Operation cannot be performed");
result = -DBL_MAX;
    }
    if(result!=-DBL_MAX)
      printf("%.2lf", res);
    
    return 0;
}
