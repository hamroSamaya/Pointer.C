/*Program to add two numbers*/

#include<stdio.h>

int main(){

int a,b,c;
a=10, b=20;
int *p1, *p2;
p1 = &a;
p2 = &b;

c= *p1 + *p2;
printf("Sum = %d",c);
return 0;
}