#include<stdio.h>
int main(){
	int a[5], b[5], i, j, aux, enc, n;
	printf("Insira os valores do vetor A:\n");
	for(i=0;i<=4;i++){
		scanf("%i", &a[i]);
		b[i]=a[i]+2;
	}
	for(i=0;i<=3;i++){
		for(j=i+1;j<=4;j++){
			if (b[j]<b[i]){
				aux=b[i];
				b[i]=b[j];
				b[j]=aux;
			}
		}
	}
	printf("Os valores de B em ordem crescente:\n");
	for(i=0;i<=4;i++){
		printf("%i\n", b[i]);
	}
	printf("Insira numero para pesquisa:\n");
	scanf("%i", &n);
	enc=0;
	for(i=0;i<=4;i++){
		if(n==b[i]){
			enc=1;
			break;
		}
	}
	if (enc==1){
		printf("Numero encontrado na %i posicao", i+1);
	}
	else{
		printf("Numero nao encontrado");
	}
	return 0;
}
