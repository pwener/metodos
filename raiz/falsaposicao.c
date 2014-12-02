#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double fn(double x){
	return 1 + x+ pow(M_E, x);
}

int main(){
	double a = -2;
	double b = -1;
	double erro = 0.005;
	if(fn(a) * fn(b) < 0){
		double x = 0;
		while(fabs(a-b)> erro){
			x = (a*fn(b) - b*fn(a))/(fn(b) - fn(a));
			if(fn(a)*fn(x) > 0)
				a = x;
			else
				b = x;

			printf("\nan=%e | bn=%e | precisao = %e", a, b, fabs(a-b));
		}
		printf("\nRaiz é aproximadamente %e | f(%e) = %e \n", x, x, fn(x));
		return 0;
	}
	printf("Intervalo errado \n");
	return 0;
}
