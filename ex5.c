#include<stdio.h>

int main(){
	int a[2], b[3], c[5], i, j, aux;
	printf("Insira os valores do vetor A:\n");
	for(i=0;i<=1;i++){
		scanf("%i", &a[i]);
		c[i]=a[i];
	}
	printf("Insira os valores do vetor B:\n");
	for(i=0;i<=2;i++){
		scanf("%i", &b[i]);
		c[i+2]=b[i];
	}
	for(i=0;i<=3;i++){
		for(j=i+1;j<=4;j++){
			if (c[j] > c[i]){
				aux = c[i];
				c[i] = c[j];
				c[j] = aux;
			}
		}
	}
	printf("Os elementos do vetor C em ordem decresente:\n");
	for(i=0;i<=4;i++){
		printf("%i\n", c[i]);
	}
	return 0;
}
