#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
void LimpaBuffer()
/* Limpa buffer de entrada para fgets */
{ while(getchar()!='\n');
return;
}

int main (void){
	
	int vN[26], n, c, t, p, l;
	char in[1004];
	scanf("%d", &n);
	LimpaBuffer();
	while(n>0){
		fgets(in,1004,stdin);
		for( c=0; in[c] >= ' '; c++ );
		in[c]= '\0';
		for(c=0;c<26;c++)
			vN[c] = 0;
		t = strlen(in);
		for(c=0;c<t;c++)
			if(in[c] >= 97 && in[c] <= 122){
				p = in[c];				
				if(vN[p-97] == 0)
					vN[p-97]++;
			//	printf("%c %d\n", p, vN[p-97]);
			}
		
		l=0;
		for(c=0;c<26;c++)
			if(vN[c]>0)
				l++;
		if(l==26)
			printf("frase completa\n");
		else
			if(l>=13)
				printf("frase quase completa\n");
			else
				printf("frase mal elaborada\n");
		n--;
	}
	return 0;
}