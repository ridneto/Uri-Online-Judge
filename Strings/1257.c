#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main (void){
	
	int n1, i, t, c, total, p, x, n2; // A = 65 a = 97;
	char in[53];
	
	scanf("%d", &n1);
	for(x=1;x<=n1;x++){
		scanf("%d", &n2);
		LimpaBuffer();
		total=0;
		for(i=0;i<n2;i++){
			fgets(in,53,stdin);
			for( c=0; in[c] >= ' '; c++ );
			in[c]= '\0';
			t = strlen(in);
			for(c=0;c<t;c++){
				p = in[c];
				total += (p-65) + i + c;
			}
		}
		printf("%d\n", total);
	}
	return 0;
}