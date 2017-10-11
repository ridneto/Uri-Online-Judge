#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int main(){
	
	short int per[1000], n, k, i, j, qnt;
	
	while(scanf("%hd %hd", &n, &k) && n && k){
		for(i=0;i<n;i++)
			per[i] = FALSE;
		for(i=0;i<n;i++){
			scanf("%hd", &j);
			per[j-1]++;
		}
		for(i=0, qnt=0;i<n;i++)
			if(per[i] >= k)
				qnt++;
		printf("%hd\n", qnt);
	}
	return 0;
}







