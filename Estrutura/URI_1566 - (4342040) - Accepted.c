#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>
#include <time.h>

int main (){	
	
	int h, a, i, al[230], m=0;
	long long int n;
	
	scanf("%lld", &n);
	while(n>0){		
		for(i=19;i<230;i++)
			al[i] = 0;
		scanf("%d", &h);
		for(i=0;i<h;i++){
			scanf("%d ", &a);
			al[a-1]++;
			if(a>m)
				m = a;
		}
		for(i=19;i<m;i++)
			while(al[i] > 0){
				if(i+1==m && al[i] == 1)
					printf("%d", i+1);
				else
					printf("%d ", i+1);
				al[i]--;
			}
		printf("\n");
		n--;
	}
	
	return 0;
}
