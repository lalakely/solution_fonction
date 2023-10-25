#include "head.h"

double resolution(double a, double eps , double s){
	while(fabs(f(s)) > eps){
		s = a - f(a)/f_p(a);
		a = s;
		printf(" %.11f \n",a);
	}
	return s;
}

double f(double x){
	return log(x) - 1;
}

double f_p(double x){
	return 1/x ;
}

void display(double x){
	printf("S = { %.11f }",x);
}
