#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int v, n, al=1;
	scanf("%d", &v);
	
	while(al <= v){
		scanf("%d", &n);
		if(n == 0){
			printf("NULL\n");
		}else{
			if(n < 0){
				if(n%2==0){
					printf("EVEN NEGATIVE\n");
				}else{
					printf("ODD NEGATIVE\n");
				}
			}else{
				if(n%2==0){
					printf("EVEN POSITIVE\n");
				}else{
					printf("ODD POSITIVE\n");
				}
			}
		}
		al++;
	}	
	return 0;
}