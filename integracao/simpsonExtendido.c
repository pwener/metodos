#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float fn(float x){
	return pow(M_E, x);	
}

float integrateSimpson(float x[], int n){
	float h = x[1] - x[0];
	float sumPair, sumOdd;
	sumPair = 0, sumOdd = 0;
	int i;
	for(i = 1; i < n; i++){
		if(i%2 == 0){
			sumPair += fn(x[i]);
		}else{
			sumOdd += fn(x[i]);
		}
	}
	return h/3 * (fn(x[0]) + 2*sumPair + 4*sumOdd + fn(x[n]));
}

int main(){
	int n, count;
	printf("Insira a quantidade de intervalos>>");
	scanf("%d", &n);
	float x[n];
	for(count = 0; count <= n; count++){
		printf("Insira um x%d>>", count);
		scanf("%f", &x[count]);
	}
	printf("A integração no intervalo [%f, %f]>> %f\n", x[0], x[n], integrateSimpson(x, n));
	return 0;
}
