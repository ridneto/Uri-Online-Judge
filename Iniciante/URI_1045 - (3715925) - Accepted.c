#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	double A=0, B=0, C=0, Aux;
	scanf("%lf%lf%lf", &A,&B,&C);
	
	if(A>B && A>C){
		if(B<C){
			Aux = B;
			B = C;
			C = Aux;
		}
	}else{
		if(B>A && B>C){
			Aux = A;
			A = B;
			if(Aux>C)
				B = Aux;
			else{
				B = C;
				C = Aux;
			}	
		}else{
			Aux = A;
			A = C;
			if(Aux > B){
				C = B;
				B = Aux;
			}else{
				C = Aux;
			}				
		}
	}	
	if(A>=(B+C))
		printf("NAO FORMA TRIANGULO\n");
	else{		
		if(pow(A,2)== (pow(B,2)+pow(C,2)))
			printf("TRIANGULO RETANGULO\n");
		if(pow(A,2) > (pow(B,2)+pow(C,2)))
			printf("TRIANGULO OBTUSANGULO\n");
		if(pow(A,2) < (pow(B,2)+pow(C,2)))
			printf("TRIANGULO ACUTANGULO\n");
		if(A==B && B==C)
			printf("TRIANGULO EQUILATERO\n");
		else
			if(A == B)
				printf("TRIANGULO ISOSCELES\n");
			else
				if(B == C)
					printf("TRIANGULO ISOSCELES\n");
	}
	return 0;
}