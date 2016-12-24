#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int primo(long long int);

int main() {
	
	long long int num;
	int v;
	
	scanf("%d", &v);
	
	while(v > 0){
		scanf("%lld", &num);
		if(primo(num) == 1)
			printf("Prime\n");
		else
			printf("Not Prime\n");	
		v--;
	}
	
	return 0;
}

int primo(long long int n){
	int r, c;
	if(n == 2)
		return 1;	
	if(n%2==0)
		return -1;
	r = sqrt(n);
	
	for(c=3;c<=r;c+=2)
		if(n%c == 0)
			return -1;
	return 1;	
		
}