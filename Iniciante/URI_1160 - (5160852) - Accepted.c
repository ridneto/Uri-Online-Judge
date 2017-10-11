#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define INF 10000

int main(){
	
	int n, a, b, anos;
	double ta, tb;
	scanf("%d", &n);
	while(n--){
		scanf("%d %d %lf %lf", &a, &b, &ta, &tb);		
		for(anos=0, ta/=100, tb/=100;a<=b && anos < 101;anos++, a *= 1 + ta, b *= 1 + tb);		
		if(anos > 100)
			printf("Mais de 1 seculo.\n");
		else
			printf("%d anos.\n", anos);
	}	
	return 0;
}







