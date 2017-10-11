#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	int n, c;
	scanf("%d", &n);
	for(c=1;c<=n;c++)
		if(n%c==0)
			printf("%d\n", c);
    return 0;	

}