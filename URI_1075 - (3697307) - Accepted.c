#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int n, q = 1;
	scanf("%d", &n);
	while(q<=10000){
		if(q%n==2){
			printf("%d\n", q);
		}
		q++;
	}	
	return 0;
}
