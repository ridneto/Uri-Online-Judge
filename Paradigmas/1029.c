#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int calls;
int fib(int);

int main (){	
	int v, n;
	scanf("%d", &v);
	while(v>0){
		scanf("%d", &n);
		calls = 0;
		printf("fib(%d) = %d calls = %d\n", n, calls, fib(n));
		v--;		
	}
	return 0;
}

int fib(int n){
	if(n < 2)
		return n;
	else{
		calls+=2;
		return fib(n-1) + fib(n-2);		
	}	
}