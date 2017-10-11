#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define INF 10000

int main(){
	
	char esc[1000];
	int s, d, i, l;
	memset(esc,0,sizeof(esc));
	scanf("%d %d", &s, &d);
	for(i=0;i<d;i++){
		scanf("%d", &l);
		esc[l-1] = 1;
	}
	for(i=0;i<s;i++){
		scanf("%d", &l);
		if(!esc[l-1]){
			printf("1\n");
			esc[l-1] = 1;
		}else
			printf("0\n");
	}
	return 0;
}