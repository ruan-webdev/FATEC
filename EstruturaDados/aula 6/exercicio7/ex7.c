#include <stdio.h>

void bin(int n){
	if (n<2){
		printf("1\n");
	}else{
		printf("%d", n%2);
		bin(n/2);
	}
}

int main(void){
	int n;
	printf("Digite o numero: ");
	scanf("%d", &n);
	bin(n);
	return 0;
}

