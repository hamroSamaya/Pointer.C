/*write a program to print the address of a variable along with its value*/
#include<stdio.h>
void main(){

char a;
int x;
float p,q;

a='A';
x=125;
p=10.25, q=18.76;
printf("%c is stored at addr %u.\n", a, &a);
printf("%d is stored at addr %u.\n", x, &x);
printf("%f is stored at addr %u.\n", p, &p);
printf("%f is stored at addr %u.\n", q, &q);

}