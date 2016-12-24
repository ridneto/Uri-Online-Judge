#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

#define MAX 11

int main (){

	char a[MAX], b[MAX];
	int ca, cb, ta, tb, enc, n;
	
	scanf("%d", &n);
	
	while(n>0){		
		scanf("%s %s", a, b);
		ta = strlen(a);
		tb = strlen(b);
		enc=0;
		if(ta>=tb)
			for(ca=ta-1,cb=tb-1, enc=1;cb>=0 && enc;ca--,cb--){
				if(a[ca] != b[cb])
					enc=0;
			}
		if(!enc)
			printf("nao encaixa\n");
		else
			printf("encaixa\n");
		n--;
	}
	
	return 0;
}