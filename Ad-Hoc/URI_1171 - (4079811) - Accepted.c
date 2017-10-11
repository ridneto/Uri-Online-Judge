#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void LimpaBuffer()
{
	while(getchar()!= '\n');
	return;
}

int main (void){

	int vP[2000];
	int n, x, maior=0;
	scanf("%d", &n);
	for(x=0;x<2000;x++)
		vP[x] = 0;
	while(n>=1){
		scanf("%d", &x);
		if(x>maior)
			maior = x;
		vP[x-1]++;
		n--;
	}
	for(n=0;n<=maior;n++)
		if(vP[n] >= 1)
			printf("%d aparece %d vez(es)\n", n+1,vP[n]);
	return 0;
}