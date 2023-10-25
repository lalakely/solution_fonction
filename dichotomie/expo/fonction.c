#include "head.h"

double resolution(double min , double max , double epsilon , double solution){
	while(fabs(max - min) > epsilon){
		if(f(solution) * f(min) > 0){
			min = solution;
			solution += (max - min)/2;
		}
		else if(f(solution) * f(max) > 0){
			max = solution;
			solution -= (max - min)/2;
		}
		printf(" %f %f \n" , max  , min);
	}
	printf("la solution finale = %f ", solution);
	return solution;
}

double f(double x){
	return log(x) - 1;
}
