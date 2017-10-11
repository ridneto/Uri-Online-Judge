#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void LimpaBuffer()
{
	while(getchar()!= '\n');
	return;
}

int main (){

	char a[1001], b[1001];
	int n, ta, tb, enc, ca, cb;
	
	scanf("%d", &n);
	
	while(n>0){		
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
		if(enc == 0)
			printf("nao encaixa\n");
		else
			printf("encaixa\n");
		n--;
	}
	
	return 0;
}