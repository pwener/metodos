#include <stdio.h>
#include <stdlib.h>

float L(int ordem, float ptx, float x[]){
	float L = 1;
	int i = 0;
	int tam = (int) (sizeof(x)/sizeof(x[0]));
	for(i = 0; i <= tam; i++){
		if(i != ordem){
			L = L * (ptx - x[i])/(x[ordem]-x[i]);	
		}
	}
	return L;
}

int main(){
	int i, ordem = 0;
	printf("Quantidade de dados>>");
	scanf("%d", &ordem);
	float x[ordem], y[ordem];
	for(i = 0; i < ordem; i++){
		printf("x%d>> ", i);
		scanf("%f", &x[i]);
		printf("y%d>> ", i);
		scanf("%f", &y[i]);       
	
	}

	float ptx, pty;
	while(1){
		printf("\nEscolha um x da p(x)>> ");
		scanf("%f", &ptx);
		for(i = 0; i < ordem; i++){
			pty += y[i]*L(i, ptx, x);
		}
		printf("\np(%f) = %f\n", ptx, pty);
		ptx = 0;
		pty = 0;
		printf("\n>>>Digite ctrl + c para finalizar o programa<<<\n");
	}
}
