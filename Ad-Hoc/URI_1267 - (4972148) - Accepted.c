#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

	short int i, j, n, d, k, Alumni[100];
	
	while(1){
		scanf("%hd %hd", &n, &d);
		if(n == 0 && d == 0) break;
		
		for(i=0;i<n;i++)
			Alumni[i] = 0;
		
		for(i=0;i<d;i++)
			for(j=0;j<n;j++){
				scanf("%hd", &k);
				Alumni[j]+= k;
			}
		
		for(i=0, j=0;i<n && j==0;i++)
			if(Alumni[i] == d)
				j++;
		if(j)
			printf("yes\n");
		else
			printf("no\n");
	}
	
	return 0;
}