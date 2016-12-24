#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX 600
#define VAZIA -1

typedef struct{char vetor[MAX]; int topo;}Pilha;
void push(Pilha *, char);
void pop(Pilha *);
void zera(Pilha *);

int GrauOpr(char);
int EhOpr(char);
char opr[7] = {'+','-','*','/','^','(',')'}; //7
int grau[7] = {1,1,2,2,3,0,4};

int main(){	
	int i, n;
	char expr[MAX];
	Pilha p;
	
	scanf("%d", &n);
	while(n--){
		zera(&p);
		scanf("%s", expr);
		for(i=0;expr[i] != '\0';i++){
			if(!EhOpr(expr[i]))
				printf("%c", expr[i]);
			else
				if(p.topo == VAZIA)
					push(&p, expr[i]);
				else
					if(expr[i] == ')'){
						while(p.vetor[p.topo] != '('){
							printf("%c", p.vetor[p.topo]);
							pop(&p);
						}
						pop(&p);
					}else{						
						while(GrauOpr(p.vetor[p.topo]) >= GrauOpr(expr[i])){
							if(expr[i] == '(')
								break;
							printf("%c", p.vetor[p.topo]);
							pop(&p);
							if(p.topo == VAZIA)
								break;
						}
						push(&p, expr[i]);
					}
		}					
		while(p.topo != VAZIA){			
			printf("%c", p.vetor[p.topo]);
			pop(&p);
		}		
		printf("\n");
	}
	
	return 0;
}

int GrauOpr(char c){
	int i;
	for(i=0;;i++)
		if(opr[i] == c)
			return grau[i];
}

int EhOpr(char c){
	int i;
	for(i=0;i<7;i++)
		if(opr[i] == c)
			return 1;
	return 0;	
}

void zera(Pilha *p){
	p->topo = VAZIA;
}

void push(Pilha *p, char operador){
	p->vetor[++p->topo] = operador;
}

void pop(Pilha *p){
	p->topo--;
}
