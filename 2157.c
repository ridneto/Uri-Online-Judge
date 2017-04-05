#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void invert(int);

int main(){	
	int i, n, in, fi;
	
	scanf("%d", &n);
	while(n--){
		scanf("%d %d", &in, &fi);
		for(i=in;i<=fi;i++)
			printf("%d", i);
		for(i=fi;i>=in;i--)
			invert(i);
		printf("\n");
	}	
	return 0;
}

void invert(int i){
	for(;i;){
		printf("%d", i%10);
		i/=10;
	}
}