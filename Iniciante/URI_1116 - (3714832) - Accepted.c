#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int n1, n2, v;
	float r;
	scanf("%d", &v);
	while(v!=0){
		scanf("%d%d", &n1, &n2);
		if(n2==0){
			printf("divisao impossivel\n");
		}else{
			if(n1==0){
				printf("0.0\n");
			}else{
				r = (float)n1/(float)n2;
				printf("%.1f\n", r);
			}
		}		
		v--;
	}
	return 0;
}