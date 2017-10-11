#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main (void){
	
	char in[1001];
	int n, i, t, ab, d;
	
	scanf("%d", &n);
	
	while(n--){
		scanf(" %s", in);
		t = strlen(in);
		for(i=0, d=0, ab=0;i<t;i++)
			if(in[i] == '<')
				ab++;
			else
				if(in[i] == '>' && ab){
					d++;
					ab--;
				}
		printf("%d\n", d);			
	}
	
	return 0;
}
