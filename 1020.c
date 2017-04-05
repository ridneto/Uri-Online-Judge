#include <stdio.h>
#include <math.h>
 
int main() {
  
    int Idade, Var;
	
	scanf("%d", &Idade);
	
	Var = Idade / 365;
	Idade = Idade - Var * 365;
	printf("%d ano(s)\n", Var);	
	Var = Idade / 30;
	Idade = Idade - Var * 30;
	printf("%d mes(es)\n", Var);
	printf("%d dia(s)\n", Idade);
	
    return 0;
}