#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int a, n, s=0, z=0, c;
	scanf("%d",&a);
	do{
		scanf("%d",&n);
	}while(n<=0);
	for(c=1;c<=n;c++){
		s=s+a+z;
		z++;
	}
	printf("%d\n", s);		
	
	return 0;
}