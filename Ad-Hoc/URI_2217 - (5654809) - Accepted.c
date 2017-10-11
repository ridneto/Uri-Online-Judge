#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){	
	int n, i;
	
	scanf("%d", &n);
	while(n--){
		scanf("%d", &i);
		if(i%2)
			printf("9\n");
		else
			printf("1\n");
	}
	
	return 0;
}
