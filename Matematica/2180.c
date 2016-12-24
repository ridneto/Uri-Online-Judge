#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define DIST 60000000

int Euclides(int);

int main(){
	
	int comb, primos=0, i, j, h;
	scanf("%d", &comb);
	
	for(i=0, j=0; j < 10; i++)
		if(Euclides(comb+i)){
			primos+=comb+i;
			j++;
		}
	printf("%d km/h\n", primos);	
	h = DIST / primos;
	printf("%d h / %d d\n", h, h/24);
	return 0;
}

int Euclides(int n){
	int r, c;
	if(n == 2)
		return 1;	
	if(n%2==0)
		return 0;
	r = sqrt(n);
	
	for(c=3;c<=r;c+=2)
		if(n%c == 0)
			return 0;
	return 1;	
		
}