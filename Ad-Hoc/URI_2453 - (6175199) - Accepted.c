#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define MAX 1005

int main(){	
	
	char in[MAX];
	int i, j;
	
	fgets(in, MAX, stdin);
	
	for(i=0; in[i] >= 32; i++);
	in[i] = '\0';
	
	for(i=0, j=1; in[i] != '\0'; i++)
		if(in[i] == 'p' && j)
			j=0;
		else{
			printf("%c", in[i]);
			j=1;
		}			
	
	printf("\n");
	
	return 0;
}

