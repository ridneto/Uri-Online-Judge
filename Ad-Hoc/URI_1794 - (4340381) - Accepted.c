#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>
#include <time.h>

int main (){	
	
	int n, la, lb, sa, sb;
	
	scanf("%d", &n);
	scanf("%d %d", &la, &lb);
	scanf("%d %d", &sa, &sb);
	if(n>=la&&n<=lb&&n>=sa&&n<=sb)
		printf("possivel\n");
	else
		printf("impossivel\n");
	return 0;
}