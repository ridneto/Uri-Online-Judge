#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
void LimpaBuffer()
/* Limpa buffer de entrada para fgets */
{ while(getchar()!='\n');
return;
}
//char ;

int main (void){
	
	int m, f, p, c=0, tv, s, i;
	char t[2], in[1000000];
	
	while(scanf("%s", t) != EOF){		
		LimpaBuffer();
		c++;
		p=0;
		m=0;
		f=0;
		
		fgets(in,1000000,stdin);	
		for(i=0;in[i] >= 32;i++);
		in[i] = '\0';		
		tv = strlen(in);
		
		for(s=0;s<tv;s+=5){
			if(in[s] == t[0] && in[s+1] == t[1]){
			p++;
				if(in[s+3] == 'F')
					f++;
				else
					m++;
			}	
		}
		
		if(c>1)
			printf("\n");
		printf("Caso %d:\n", c);
		printf("Pares Iguais: %d\n", p);
		printf("F: %d\n", f);
		printf("M: %d\n", m);
	}	
	
	
	return 0;
}
