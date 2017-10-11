#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main(){
	
	int n, c, ta , tb;
	char a[51], b[51];
	
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
