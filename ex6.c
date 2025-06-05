#include<stdio.h>
int main(){
	int a[3], b[3], i, j, enc, n;
	printf("Insira os valores do vetor A:\n");
	for(i=0;i<=2;i++){
		scanf("%i",&a[i]);
		b[i]=a[i]*a[i]*a[i];
	}
	printf("Os valores do vetor B:\n");
	for(i=0;i<=2;i++){
		printf("%i\n", b[i]);
	}
	printf("Insira numero para pesquisa:\n");
	scanf("%i", &n);
	enc=0;
	for(i=0;i<=2;i++){
		if (n==b[i]){
			enc = 1;
			break;
		}
	}
	if (enc==1){
		printf("Numero encontrado na %i posicao\n", i+1);
	}
	else{
		printf("Numero nao encontrado");
	}
	return 0;
}
