#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void LimpaBuffer()
{
	while(getchar()!= '\n');
	return;
}

void mdc(int, int);

int main (){
	int a, b, n;
	scanf("%d", &n);
	while(n>0){
		scanf("%d %d", &a, &b);
		mdc(a,b);
		n--;
	}
	
	return 0;
}

void mdc(int n1, int n2){
	int resto;
	if(n1<n2){
		resto = n1;
		n1 = n2;
		n2 = resto;
	}
	
	resto = n1%n2;	
	while(resto!=0){
		n1 = n2;
		n2 = resto;
		resto = n1%n2;
	}	
	printf("%d\n", n2);
}