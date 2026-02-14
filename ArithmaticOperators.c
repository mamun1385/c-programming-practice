#include<stdio.h>
int main(){
  int a, b, c;
 
printf("Enter your number a = ");
scanf("%d", &a);
printf("Enter your number b = ");
scanf("%d", &b);
//sum
c=a+b;
printf("a+b = %d\n", c);

//sub
c=a-b;
printf("a-b = %d\n", c);

//multiplication
c=a*b;
printf("a*b = %d\n", c);

//division
c=a/b;
printf("a/b = %d\n", c);

return 0;
}