#include<stdio.h>

int main(){
	int a[5], b[5], i, j, aux;
	printf("Insira os numero:\n");
	for(i=0;i<=4;i++){
		scanf("%i", &a[i]);
		b[i]=1;
		for(j=1;j<=a[i];j++){
			b[i]=b[i]*j;
		}
	}
	for(i=0;i<=3;i++){
		for(j=i+1;j<=4;j++){
			if (b[i] > b[j]){
				aux=b[i];
				b[i]=b[j];
				b[j]=aux;
			}
		}
	}
	printf("Os numeros em fatorial e em ordem cresente:\n");
	for(j=0;j<=4;j++){
		printf("%i\n", b[j]);
	}
	return 0;
}
