#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	printf("Digite o tamanho da escada: ");
	scanf("%d", &n);
	for (int i=0; i<n; i++){
		for (int k=n-i; k>=0; k--){
			printf(" ");
		}
		for (int j=0; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
}	
