#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main (){
	int n, desl, aux, c;
	char in[51];
	
	scanf("%d", &n);
	while(n>0){
		scanf("%s", in);
		scanf("%d", &desl);
		for(c=0;in[c] != '\0';c++){
			aux = in[c] - desl;
			if(aux < 65)
				aux = 91 - (65 - aux);			
			printf("%c", aux);
		}
		printf("\n");
		n--;
	}
	
	return 0;
}


