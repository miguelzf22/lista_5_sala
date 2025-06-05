#include<stdio.h>

int main(){
	int a[8], b[8], i, j, aux, enc, n;
	printf("Insira os numero:\n");
	for(i=0;i<=7;i++){
		scanf("%i", &a[i]);
		b[i]=a[i]*5;
	}
	for(i=0;i<=6;i++){
		for(j=i+1;j<=7;j++){
			if (b[i] > b[j]){
				aux=b[i];
				b[i]=b[j];
				b[j]=aux;
			}
		}
	}
	printf("Os numeros multiplicados por 5 em ordem cresente:\n");
	for(j=0;j<=7;j++){
		printf("%i\n", b[j]);
	}
	printf("Pesquise um numero:\n");
	scanf("%i", &n);
	for(i=0;i<=7;i++){
		if (n == b[i]){
			enc=1;
			break;
		}
	}
	if (enc==1){
		printf("Numero encontrado na %i posicao\n", i+1);
	}
	else{
		printf("Numero nao encontrado\n");
	}
	return 0;
}
