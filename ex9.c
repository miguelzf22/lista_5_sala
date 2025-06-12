#include<stdio.h>
#include<string.h>
int main(){
	char a[5][30], x[5][30], n[30]; 
	int i, j, enc;
	for(i=0;i<5;++i){
		printf("Nome %i: ", i+1);
		fgets(a[i], 30, stdin); 
		fflush(stdin);
	}
	for(i=0;i<4;++i){
		for(j=i+1;j<5;++j){
			if (strcmp(a[i], a[j])>0){
				strcpy(x, a[i]);
				strcpy(a[i], a[j]);
				strcpy(a[j], x);
			}
		}
	}
	printf("Números em ordem alfabética:\n");
	for(i=0;i<5;++i){
		printf("%s", a[i]);
	}
	printf("Procure um nome: ");
	fgets(n, 30, stdin);
	fflush(stdin);
	enc=0;
	for(i=0;i<5;++i){
		if(strcmp(a[i], n) == 0){
			enc = 1;
			break;
		}
	}
	if(enc){
		printf("Numero encontrado em %i posicao", i+1);
	}
	else{
		printf("Numero encontrado");
	}
	return 0;
}
