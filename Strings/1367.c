#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main (void){
	
	char id[1], resp[10];
	int t, n, vId[26], p, total, a;
	
	while(scanf("%d", &n) && n != 0){	
		for(t=0;t<26;t++)
			vId[t] = 0;
		total = 0;
		a = 0;
		while(n>0){
			scanf("%s %d %s", id, &t, resp);
			p = id[0];
			if(strcmp(resp,"incorrect")==0)
				vId[p-65]++;
			else{
				a++;
				total += t + (vId[p-65] * 20); 
			}				
			n--;
		}
		printf("%d %d\n", a, total);
	}
	
	return 0;
}

