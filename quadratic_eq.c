#include <stdio.h>
#include <math.h>

main() {
//this program is calculating the real solutions for ax^2+bx+c=0
 float x1;
 float x2;
 int a,b,c;
 float shoresh;


 printf("please enter values for a,b,c\n");
 scanf("%d %d %d", &a, &b, &c);

 shoresh = pow(b,2)-4*a*c;
	if (shoresh <0) {
		printf("Oops! These numbers give a negative root. Please try again\n");
	}

	else {
		x1 = (-b+sqrt(shoresh))/(2*a);
		x2 = (-b-sqrt(shoresh))/(2*a);
		printf("The quadratic equation is:  %dx^2 +%dx +%d = 0\n", a,b,c);
		printf("The solutions are: \n x1= %.2f\n x2=%.2f\n", x1,x2);
	}

}
