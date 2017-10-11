#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
void LimpaBuffer()
/* Limpa buffer de entrada para fgets */
{ while(getchar()!='\n');
return;
}

int main (void){
	
	int t1, t2, t3, t4;
	scanf("%d %d %d %d", &t1,&t2,&t3,&t4);
	printf("%d\n", t1+t2+t3+t4-3);
	
	return 0;
}
