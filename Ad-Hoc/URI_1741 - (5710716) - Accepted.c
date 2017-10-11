#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_LETRA 10000003
#define MAX_PILHA 5000000
#define MAX_FLAG 2
#define VAZIA -1

typedef struct{int pilha[MAX_PILHA]; int topo;}TPilha;
void inicializa(TPilha *, char *, int *);
void push(TPilha *, int);
int pop(TPilha *);
void calc(TPilha *, char, int *);

void imprimi(TPilha *, int);
TPilha p;
char in[MAX_LETRA];	

int main(){	
	
	int i, flag[MAX_FLAG]; // Ind 0 -> Erro sintaxe, Ind 1 -> Div por 0		
	
	while(fgets(in, MAX_LETRA, stdin) != NULL){
		inicializa(&p, in, flag);
		if(strlen(in)){
			for(i = strlen(in) - 1; i >= 0; i--){
				if(in[i] != ' '){
					if(in[i] >= '0' && in[i] <= '9')
						push(&p, in[i] - '0');
					else
						if(p.topo < 1){
							flag[0] = 1;
							break;
						}else
							calc(&p, in[i], flag);
				}
			}
			if(flag[0] || p.topo != 0)
				printf("Invalid expression.\n");
			else
				if(flag[1])
					printf("Division by zero.\n");
				else
					printf("The answer is %d.\n", p.pilha[p.topo]);
		}
	}
	
	return 0;
}

void calc(TPilha *p, char opr, int *flag){
	int aux = pop(p);
	if(opr == '+')
		p->pilha[p->topo] += aux;
	else
		if(opr == '-')
			p->pilha[p->topo] -= aux;
		else
			if(opr == '*')
				p->pilha[p->topo] *= aux;
			else
				if(opr == '/'){
					if(aux == 0)
						flag[1] = 1;
					else
						p->pilha[p->topo] /= aux;				
				}
}

void push(TPilha *p, int e){
	p->pilha[++p->topo] = e;
}

int pop(TPilha *p){
	return p->pilha[p->topo--];
}

void inicializa(TPilha *p, char *in, int *flag){
	int i;
	
	p->topo = VAZIA;
	
	for(i=0; in[i]>= 32; i++);
	in[i] = '\0';	
	
	for(i=0; i<MAX_FLAG; i++)
		flag[i] = 0;
}