#include "head.h"

double resolution(double a , double b , double eps , double s){
	s = b;
	while(f(s) > eps){
		s = a - (f(a) * (a - b))/(f(a) - f(b));
		b = s;
		printf("%f %f\n" , a , b);
	}
	return s;
}

double f(double x){
	return log(x) - 1;
}

void display(double x){
	printf("La solution est = { %.11f }\n",x);
}
