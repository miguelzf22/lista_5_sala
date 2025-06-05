#include<stdio.h>

int main(){
	int a[12], i, j, aux;
	printf("Insira os numero:\n");
	for(i=0;i<=11;i++){
		scanf("%i", &a[i]);
	}
	for(i=0;i<=10;i++){
		for(j=i+1;j<=11;j++){
			if (a[i] < a[j]){
				aux=a[i];
				a[i]=a[j];
				a[j]=aux;
			}
		}
	}
	printf("Os numeros em ordem decresente:\n");
	for(j=0;j<=11;j++){
		printf("%i\n", a[j]);
	}
	return 0;
}
