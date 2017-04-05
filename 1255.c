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
	
	char in[203]; // 97 = a; 122 = z;
	int n, c, p, t, m, vN[26];
 
	scanf("%d", &n);
	LimpaBuffer();
	while(n>0){
		for(c=0;c<=25;c++)
			vN[c] = 0;
		fgets(in,203,stdin);				
		for( c=0; in[c] >= ' '; c++ );
		in[c]= '\0';
		t = strlen(in);
		m=1;		
		for(c=0;c<t;c++){
			if(in[c] >= 65 && in[c] <= 90)
				in[c] = tolower(in[c]);
			if(in[c] >= 97 && in[c] <= 122){
				p = in[c];
				vN[p-97]++;
				if(vN[p-97] > m)
					m = vN[p-97];
			}
		}
		for(c=0;c<26;c++)
			if(vN[c] == m){
				printf("%c", c+97);				
			}
		printf("\n");
		n--;
	}
 
	return 0;
}