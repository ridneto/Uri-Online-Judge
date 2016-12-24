#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	int n, notas[1000], v, c, tnotas, acima;
	double m;
	
	scanf("%d", &v);
	
	while(v>0){
		scanf("%d", &n);
		for(c=0, tnotas=0;c<n;c++){
			scanf("%d", &notas[c]);
			tnotas += notas[c];
		}
		m =  tnotas / (double)n;
		for(c=0,acima=0;c<n;c++)
			if(notas[c] > m)
				acima++;
		printf("%.3lf%%\n", (acima * 100.0) / (double)n);	
		v--;
	}
	
	return 0;
}