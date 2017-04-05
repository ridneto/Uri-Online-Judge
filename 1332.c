#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void LimpaBuffer()
{ 
	while(getchar()!='\n');
	return;
}
int main (void){

	int entrada, c, t, c1, c2;
	char in[7];
	scanf("%d", &entrada);
	LimpaBuffer();
	while(entrada>0){
		fgets(in,7,stdin);
		for( c=0; in[c] >= ' '; c++ );
		in[c]= '\0';
		t = strlen(in);
		if(t==5)
			printf("3\n");
		else{
			c1=0;
			c2=0;
			if(in[0] == 'o')
				c1++;
			else
				if(in[0] == 't')
					c2++;
			if(in[1] == 'n')
				c1++;
			else
				if(in[1] == 'w')
					c2++;
			if(in[2] == 'e')
				c1++;
			else
				if(in[2] == 'o')
					c2++;
			if(c1>c2)
				printf("1\n");
			else
				printf("2\n");
		}
		entrada--;
	}
	
	return 0;
}