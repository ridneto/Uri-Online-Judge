#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(){

	long int out=0, n, i, j;
	
	scanf("%ld", &n);
	
	while(n--){
		scanf("%ld %ld", &i, &j);
		out += i * j;
	}
	
	printf("%ld\n", out);
	
	return 0;
}
