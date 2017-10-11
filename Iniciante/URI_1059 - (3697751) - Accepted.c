#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int n=2;
	while(n<=100){
		if(n%2==0){
			printf("%d\n", n);
		}
		n++;
	}
	return 0;
}