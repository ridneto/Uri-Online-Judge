#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int n, c;
	long long int t;
	scanf("%d", &n);
	while(n!=0){
		
		t = 0;
		for(c=1;c<=5;c++){
			if(n%2==0)
				t = t+n;
			else
				c--;
			n++;
		}
		printf("%lld\n", t);
		
		scanf("%d", &n);
	}	
	return 0;
}