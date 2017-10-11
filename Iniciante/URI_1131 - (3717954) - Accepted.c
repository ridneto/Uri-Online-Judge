#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int vg =0, vi = 0, empat=0, gi, gg, r, t=0;
	do{
		scanf("%d%d", &gi,&gg);
		if(gi == gg)
			empat++;
		if(gi>gg)
			vi++;
		if(gg>gi)
			vg++;
		t++;
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &r);		
	}while(r!=2);
	
	printf("%d grenais\n", t);
	printf("Inter:%d\n", vi);
	printf("Gremio:%d\n", vg);
	printf("Empates:%d\n", empat);
	if(vi>vg)
		printf("Inter venceu mais\n");
	else
		if(vi<vg)
			printf("Gremio venceu mais\n");
		else
			printf("Nao houve vencedor\n");
	
	return 0;
}