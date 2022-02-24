#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char senha[100];
void receber_senha();

int main(){
	int tam=0;
	receber_senha();
	tam = strlen(senha);
	if(tam < 6){
		int k;
		k = 6 - tam;
		printf("Sua senha contem %d, adicione mais %d caracteres. Digite novamente.\n", tam, k);
		receber_senha();
	}
	
	printf("Senha completa!");
	
}

void receber_senha(){
	printf("Digite a senhas: ");
	scanf("%s", senha);
}
