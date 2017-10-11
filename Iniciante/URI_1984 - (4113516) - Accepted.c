#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	
	char in[10];
	int t, c;
	
	scanf("%s", in);
	t = strlen(in);
	for(c = t-1;c>=0;c--)
		printf("%c",in[c]);
	printf("\n");
	
	
	return 0;
}