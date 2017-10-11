#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void LimpaBuffer()
{
	while(getchar()!= '\n');
	return;
}

int main (void){

	int n;
	long long int n1, n2;
	char j1[101], j2[101], e1[6], e2[6];
	scanf("%d", &n);
	while(n>0){
		scanf("%s %s %s %s", j1,e1,j2,e2);
		scanf("%lld %lld", &n1, &n2);
		if((n1+n2)%2==0)
			if(e1[0]=='P')
				printf("%s\n",j1);
			else
				printf("%s\n", j2);
		else
			if(e1[0]=='I')
				printf("%s\n",j1);
			else
				printf("%s\n", j2);	
		n--;
	}
	
	return 0;
}