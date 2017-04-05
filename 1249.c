#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main (void){
	
	char in[51];
	int c;	
	
	while(gets(in) != NULL){
		for(c=0;in[c] != '\0';c++)
			if(in[c] >= 65 && in[c] <= 90){
				if(in[c] >= 78){
					printf("%c",in[c]-13);
				}else
					printf("%c",in[c]+13);
			}else
				if(in[c] >= 97 && in[c] <= 122){
					if(in[c] >= 110){
						printf("%c",in[c]-13);
					}else
						printf("%c",in[c]+13);
				}else			
					printf("%c", in[c]);		
		printf("\n");
	}
	
	return 0;
}