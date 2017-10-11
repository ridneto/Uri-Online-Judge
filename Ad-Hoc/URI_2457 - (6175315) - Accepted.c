#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define MAX 1001

int main(){	
	
	char in[MAX], letra;
	int i, contem=0, total=0;
	
	scanf("%c", &letra);
	
	while(scanf("%s", in) != EOF)
		for(i=0, total++; in[i] >= 32; i++)
			if(in[i] == letra){
				contem++;
				break;
			}
	
	printf("%.1lf\n", (contem * 100) / (double)total);	
	
	return 0;
}

