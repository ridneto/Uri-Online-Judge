#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

int main (void){
	
	char v[50]; 
	int Altura[50], n, i, j, t;
	scanf("%d", &n);
	while(n--){
		scanf("%d", &t);
		for(i=0;i<t;i++)
			scanf("%d", &Altura[i]);
		scanf("%s", v);
		for(i=0, j=0;i<t;i++){
			if((v[i] == 'S' && Altura[i] < 3) || (v[i] == 'J' && Altura[i] > 2))
				j++;
		}
		printf("%d\n", j);
	}
	
	return 0;
}
