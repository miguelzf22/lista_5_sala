#include<stdio.h>
int main(){
	int a[5], b[5], c[5], i, j , aux;
	printf("Insira os valores do vetor A:\n");
	for(i=0;i<=4;i++){
		scanf("%i", &a[i]);
	}
	for(i=0;i<=3;i++){
		for(j=i+1;j<=4;j++){
			if (a[j] < a[i]){
				aux = a[i];
				a[i] = a[j];
				a[j] = aux;
			}
		}
	}
	printf("Insira os valores do vetor B:\n");
	for(i=0;i<=4;i++){
		scanf("%i", &b[i]);
	}
	for(i=0;i<=3;i++){
		for(j=i+1;j<=4;j++){
			if (b[j] < b[i]){
				aux = b[i];
				b[i] = b[j];
				b[j] = aux;
			}
		}
	}
	for(i=0;i<=4;i++){
		c[i] = a[i] + b[i];
	}
	for(i=0;i<=3;i++){
		for(j=i+1;j<=4;j++){
			if (c[j] < c[i]){
				aux = c[i];
				c[i] = c[j];
				c[j] = aux;
			}
		}
	}
	printf("O valor do vetor C em ordem crescente:\n");
	for(i=0;i<=4;i++){
		printf("%i\n", c[i]);
	}
	return 0;
}
