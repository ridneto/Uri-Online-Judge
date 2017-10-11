#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define FINAL 42195 
#define TRUE 1
#define FALSE 0

int main(){

	int n, m, i, in, last;
	char consegue=TRUE;
	
	scanf("%d %d", &n, &m);
		
	for(i=0, last=0; i<n; i++){
		scanf("%d", &in);
		if(in - last > m)
			consegue=FALSE;
		last = in;		
	}
	if(consegue && (FINAL - last <= m))
		printf("S\n");
	else
		printf("N\n");

	return 0;
}





