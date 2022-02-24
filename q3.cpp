#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	char palavra[100];
	int tam=0, cont=0;
	
	printf("Digite a palavra: ");
	scanf("%s", &palavra);
	printf("%s\n", palavra);
	
	tam = strlen(palavra);
	
	for (int i=0; i<tam; i++){
		for(int k=0; k<tam; k++){
			if (k==i) k++;
			if (palavra[k]==palavra[i]) cont++;
			
		}
	}
	printf("%d", cont);
	
}

