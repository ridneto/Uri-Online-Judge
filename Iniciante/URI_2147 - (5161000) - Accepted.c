#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define INF 10000

int main(){
	
	char in[10000];
	int i, j;
	scanf("%d", &i);
	while(i--){
		scanf("%s", in);
		j = strlen(in);
		printf("%.2lf\n",j/100.0);
	}
	
	return 0;
}