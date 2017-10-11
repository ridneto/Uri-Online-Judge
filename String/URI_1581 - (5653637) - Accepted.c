#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_TAM 21

int main(){		
	char idioma[MAX_TAM], in[MAX_TAM];
	int n, k, i, ingles;
	
	scanf("%d", &n);
	while(n--){
		scanf("%d", &k);
		scanf("%s", idioma);
		for(i=1, ingles=0; i<k; i++){
			scanf("%s", in);
			if(!ingles)
				if(strcmp(in, idioma) != 0)
					ingles++;
		}
		if(ingles)
			printf("ingles\n");
		else
			printf("%s\n", idioma);
	}
	
	return 0;
}


