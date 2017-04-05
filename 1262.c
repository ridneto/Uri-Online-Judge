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
	
	char rastro[60];
	int p, c, r=0, t, cl;
	while(gets(rastro) != NULL ){
		for( c=0; rastro[c] >= ' '; c++ );
		rastro[c]= '\0';
		scanf("%d", &p);
		t = strlen(rastro);
		for(c=0,cl=0;c<t;c++)
			if(rastro[c] == 'W')
				cl++;
			else
				if(rastro[c+1] == 'W'){
					cl++;
					r=0;
				}else{
					r++;
					if(r==p||c+1==t){
						cl++;
						r=0;
					}
				}			
		getchar();
		printf("%d\n", cl);
	}
	return 0;
}