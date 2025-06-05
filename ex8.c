#include<stdio.h>
int main(){
	int a[4], i, j, aux, enc, n;
	printf("Insira as notas dos 4 alunos:\n");
	for(i=0;i<=3;i++){
		scanf("%i", &a[i]);
	}
	for(i=0;i<=2;i++){
		for(j=i+1;j<=3;j++){
			if(a[j]<a[i]){
				aux = a[i];
				a[i] = a[j];
				a[j] = aux;
			}
		}
	}
	printf("As notas organizadas em ordem crescente:\n");
	for(i=0;i<=3;i++){
		printf("%i\n", a[i]);
	}
	printf("Insira numero para pesquisa:\n");
	scanf("%i", &n);
	enc = 0;
	for(i=0;i<=3;i++){
		if (n==a[i]){
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
