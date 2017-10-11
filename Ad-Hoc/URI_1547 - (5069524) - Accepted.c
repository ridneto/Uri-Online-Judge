#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define INF 10000

int main(){
	
	int n, esc, i, qt, idW, difW, j, out;
	scanf("%d", &n);
	while(n--){
		scanf("%d %d", &qt, &esc);
		for(i=FALSE, difW=INF, out=FALSE;i<qt && !out;i++){
			scanf("%d", &j);
			if(abs(j-esc) < difW){
				idW = i+1;
				difW  = abs(j-esc);
				if(!difW)
					out++;
			}
		}
		if(out)
			for(;i<qt;i++)
				scanf("%d", &j);
		printf("%d\n", idW);
	}
	return 0;
}







