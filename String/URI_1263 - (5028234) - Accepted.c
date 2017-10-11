#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

int main (void){
	
	char in[5200], v, flag;
	int i, a;
	
	while(gets(in)){
		for(i=1, a=0, v = in[0], flag = FALSE;in[i] != '\0';i++)
			if(in[i] == ' ')
				if(tolower(v) == tolower(in[i+1])){
					if(!flag){
						a++;
						flag = TRUE;
					}
				}else{
					v = in[i+1];
					flag = FALSE;
				}
			
		printf("%d\n", a);	
	}
	
	return 0;
}
