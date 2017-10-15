#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main (){	
	
	int jafoi = 0, n, ant=0, out;
	
	while(scanf("%d", &n) != EOF){
		if(!jafoi && n < ant){
			jafoi=1;
			out = ant + 1;			
		}
		ant = n;
	}
	
	if(!jafoi)
		out = ant + 1;

	printf("%d\n", out);
	
	return 0;
}
