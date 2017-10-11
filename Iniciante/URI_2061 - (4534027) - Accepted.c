#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main (){
	
	int n, m;
	char acao[7];
	
	scanf("%d %d", &n, &m);
	while(m>0){
		scanf("%s", acao);
		if(acao[0] == 'f')
			n++;
		else
			n--;
		m--;
	}
	printf("%d\n", n);
	
	return 0;
}
