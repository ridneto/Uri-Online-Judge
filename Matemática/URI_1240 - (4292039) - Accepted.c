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

	char a[11], b[11];
	int ca, cb, ta, tb, enc, n;
	
	scanf("%d", &n);
	
	while(n>0){		
		scanf("%s %s", a, b);
		ta = strlen(a);
		tb = strlen(b);
		enc=0;
		if(ta>=tb)
			for(ca=ta-1,cb=tb-1, enc=1;cb>=0 && enc == 1;ca--,cb--){
				if(a[ca] != b[cb])
					enc=0;
			}
		if(enc==0)
			printf("nao encaixa\n");
		else
			printf("encaixa\n");
		n--;
	}
	
	return 0;
}