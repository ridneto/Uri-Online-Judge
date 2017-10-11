#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1


int main(){
	int b[10000], n, m, c, i;
	while(1){
		scanf("%d %d", &n, &m);
		if(n == 0 && m == 0) break;
		
		for(c=0;c<n;c++)
			b[c] = 0;
		
		for(c=0, i=0;c<m;c++){
			scanf("%d", &n);
			if(!b[n-1])
				b[n-1] = 1;
			else
				if(b[n-1] == 1){
					i++;
					b[n-1]++;
				}			
		}
		printf("%d\n", i);
	}
	return 0;
}

