#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

#define MAX 51

int main(){
	
	int n, c, ta , tb;
	char a[MAX], b[MAX];
	
	scanf("%d", &n);
	while(n--){
		scanf("%s %s", a, b);
		ta = strlen(a);
		tb = strlen(b);
		
		for(c=0;c<ta||c<tb;c++){
			if(c<ta)
				printf("%c",a[c]);
			if(c<tb)
				printf("%c",b[c]);
		}
		printf("\n");
	}	
	return 0;
}
