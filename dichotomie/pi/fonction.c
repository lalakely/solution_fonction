#include "head.h"

double resolution(double a , double b , double epsilon){
	double solution = b;
	while(fabs(b - a) > epsilon){
		if(f(solution) * f(a) > 0){
			a = solution;
			solution +=(b-a)/2;
		}
		else if(f(solution) * f(b) > 0){
			b = solution;
			solution -=(b-a)/2;
		}
		printf("%.11f %.11f \n",a , b);
	}
	return solution;
}

double f(double x){
	return sin(x);
}

void display(double x){
	printf("pi = %.11f",x);
}
