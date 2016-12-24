#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define MAX_PLACA 300000 
#define MAX_ASS 8

int main(){
	
	char placa[MAX_PLACA], ass[MAX_ASS];
	int inst=0, i, j, a, vdd, r;	
	
	while(scanf(" %s ", ass) && !(ass[0] == '0' && ass[1] == '\0')){
		scanf(" %s ", placa);
		for(i=0, vdd=0; !vdd && placa[i] != '\0'; i++){
			for(j=0, r=1, a=i; ass[j] != '\0';j++, a++)
				if(placa[a] != ass[j]){
					r=0;
					break;
				}
			if(r && ass[j] == '\0')
				vdd=1;
		}
		if(inst++)
			printf("\n");
		printf("Instancia %d\n", inst);
		if(vdd)
			printf("verdadeira\n");
		else
			printf("falsa\n");
	}
	
	return 0;
}

