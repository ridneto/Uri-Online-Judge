#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	char in[101];
	double t;
	int c, n;
	
	scanf("%s", in);
	
	for(c=0, n=0, t=0;in[c] != '\0';c++)
		if(in[c] == '1' && in[c+1] == '0'){
			t += 10;
			n++;
			c++;
		}else{
			t += in[c] - '0';
			n++;
		}
	
	printf("%.2lf\n", t / (double)n);
	
	return 0;
}