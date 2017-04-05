#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

#define MAX 1001

int main (){

	char a[MAX], b[MAX];
	int n, ta, tb, enc, ca, cb;
	
	scanf("%d", &n);
	
	while(n--){		
		scanf("%s %s", a, b);
		ta = strlen(a);
		tb = strlen(b);
		if(tb > ta)
			enc = 0;
		else
			for(enc=1, cb=tb-1, ca=ta-1;cb>=0 && enc == 1;ca--, cb--){
				if(a[ca] != b[cb])
					enc = 0;
			}
		if(!enc)
			printf("nao encaixa\n");
		else
			printf("encaixa\n");
	}
	
	return 0;
}