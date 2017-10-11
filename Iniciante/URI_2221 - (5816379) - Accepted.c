#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(){

	double p[2];
	int t, i, power, atk, def, bonus;
	
	scanf("%d", &t);
	
	while(t--){
		scanf("%d", &bonus);
		for(i=0; i<2; i++){
			scanf("%d %d %d", &atk, &def, &power);
			p[i] = (atk + def) / 2.0;
			if(power % 2 == 0)
				p[i] += bonus;
		}
		if(p[0] > p[1])
			printf("Dabriel\n");
		else
			if(p[0] < p[1])
				printf("Guarte\n");
			else
				printf("Empate\n");
	}
	
	return 0;
}
