#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int n, c;
	scanf("%d", &n);
	while(n > 0){
		for(c=1;c<=n;c++){
			if(c==n)
				printf("%d\n", c);
			else
				printf("%d ", c);
		}
		scanf("%d", &n);
	}
	
	return 0;
}