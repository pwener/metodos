#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double fn(double x){
	return pow(x, 3) - x -2;
}

int main(){
	double a = 1;
	double b = 2;
	double erro = 0.00005;
	if(fn(a) * fn(b) < 0){
		double x = 0;
		while(fabs(a-b)> erro){
			x = (a + b)/2;
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
