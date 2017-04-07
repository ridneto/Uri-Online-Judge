#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int n, t=1;
	scanf("%d", &n);
	if(n%2==0){
		n++;
	}
	while(t<=11){
		if(n%2!=0){
			printf("%d\n", n);
		}
		n++;
		t++;
	}
}