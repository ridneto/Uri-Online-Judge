#include <stdio.h>

int main() {
    
	int IdFunc, HrTrabalha;
	float RecebeHr, Salario;
	
	scanf("%d%d%f", &IdFunc, &HrTrabalha, &RecebeHr);
	Salario = RecebeHr * HrTrabalha;
	printf("NUMBER = %d\nSALARY = U$ %.2f\n", IdFunc, Salario);	
		
    return 0;
}