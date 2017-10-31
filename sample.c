#include <stdio.h>
#include <math.h>

main() {
//	variable declarations: x,y and z are integer numbers. a, b and c are
//	real numbers

int y,z;
float a,b,c;

//initialize some values
z=2
c=0.5;

//ask for user input
printf("Please input an integer number for variable x:\nx=);


scanf("%d",&x);	//get values from keybaord
y=x*x;	//perform calculation
 
 printf("x^2=%d\n",y);	//print result

//repeat for other variables
printf("Please input a floating point number between 0.1 and 0.9 for variable a:\na=");
scanf("%f",&a);
b=c-a;
printf("%f-a=%f\n",c,b);
 

