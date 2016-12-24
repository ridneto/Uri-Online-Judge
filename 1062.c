#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX 1000

typedef struct{int vetor[MAX]; int topo;}Pilha;
void push(Pilha *, int);
void pop(Pilha *);

int main(){	
	
	int fora, vagoes, i, deuruim, entrando, zero; 
	Pilha p;
	
	while(scanf("%d", &vagoes) && vagoes){
		while(1){			
			p.topo = -1;
			for(i=0, entrando=1, deuruim=0, zero=0; i<vagoes && !deuruim && !zero; i++){
				scanf("%d", &fora);
				if(!fora){
					zero=1;
					break;
				}
				while(1){
					if(fora == entrando){
						entrando++;
						break;
					}else
						if(fora > entrando){
							push(&p, entrando);
							entrando++;
						}else{
							if(p.vetor[p.topo] == fora)
								pop(&p);
							else{
								deuruim=1;
								for(;i<vagoes-1;i++)
									scanf("%d", &fora);
							}								
							break;
						}
				}				
			}
			if(!zero)
				if(!deuruim)
					printf("Yes\n");
				else
					printf("No\n");
			else
				break;
		}
		printf("\n");
	}
	return 0;
}

void push(Pilha *p, int id){
	p->vetor[++p->topo] = id;
}

void pop(Pilha *p){
	p->topo--;
}
