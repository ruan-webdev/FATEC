#include <stdio.h>

float pot(float x, float n){
	if(n==0){
		return 1;
	}else{
		return x*pot(x, n-1);
	}
}

int main(void){
	float x,n;
	printf("Digite o valor da base: ");
	scanf("%f", &x);
	printf("Digite o valor do expoente: ");
	scanf("%f", &n);
	printf("Potencia: %0.f\n", pot(x,n));
	return 0;
}
