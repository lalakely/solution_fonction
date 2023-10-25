#include "head.h"

int main(){
	double a = 3;
	double eps = 0.0000001;
	double s = a;

	display(resolution(a , eps , s));

	return 0;
}
