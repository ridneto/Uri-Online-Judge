#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int v, n, in=0, out =0;
	scanf("%d", &v);
	while(v!=0){
		scanf("%d", &n);
		if(n >= 10 && n<= 20){
			in++;
		}else{
			out++;
		}
		v--;
	}
	printf("%d in\n", in);
	printf("%d out\n", out);
	
	return 0;
}