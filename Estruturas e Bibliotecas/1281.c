#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define MAX 500000

typedef struct{char nome[51];double preco;}Fruta;
Fruta Frutas[MAX];
int main() {
	
	char desej[51];
	int n, f, d, c, qnt, c1, s;
	double t;
	scanf("%d", &n);
	while(n--){
		scanf("%d", &f);
		for(c=0;c<f;c++)
			scanf("%s %lf", Frutas[c].nome, &Frutas[c].preco);
		scanf("%d", &d);
		
		for(c=0, t=0;c<d;c++){
			scanf("%s %d", desej, &qnt);
			for(c1=0,s=0;c1<f && s==0;c1++)
				if(strcmp(desej,Frutas[c1].nome)==0){
					t+=Frutas[c1].preco * qnt;
					s=1;
				}
		}
		printf("R$ %.2lf\n", t);
	}
	
	return 0;
}