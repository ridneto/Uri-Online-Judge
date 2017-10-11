#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void LimpaBuffer()
{
	while(getchar()!= '\n');
	return;
}

int main (){
	
	int caso=0, n, cap, c, t, idade;

	scanf("%d", &n);
	while(n>0){
		caso++;
		scanf("%d ", &t);
		for(c=1;c<=t;c++){
			scanf("%d ", &idade);
			if(t/2+1==c)
				cap = idade;
		}
		printf("Case %d: %d\n", caso,cap);
		n--;
	}
	
	return 0;
}