#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int nlido, nmaior, npo=0, npomaior, cont;
	for(cont=1; cont <101; cont++){
		scanf("%d", &nlido);
		npo++;
		if(nlido > nmaior){
			nmaior = nlido;
			npomaior = npo;
		}
	}
	printf("%d\n", nmaior);
	printf("%d\n", npomaior);
	return 0;
}