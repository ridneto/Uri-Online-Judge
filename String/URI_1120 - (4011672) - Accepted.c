#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main (void){
	
	char in[104], out[101];
	int digito, c, t, cc, zeroesq, sair=0;
	do{
		scanf("%d %s", &digito, in);
		if((digito==0)&&((in[0] - '0')==0) && (in[1]== '\0'))
			sair=1;
		if(sair==0){
			t = strlen(in);
			for(c=0,cc=0, zeroesq=0;c < t;c++){
				if((in[c] - '0') != digito){
					if(zeroesq==0){
						if((in[c] - '0') != 0){
							out[cc] = in[c];
							cc++;
							zeroesq++;
						}
					}else{
						out[cc] = in[c];
						cc++;
					}
				}
			}
			if(cc==0){
				out[0] = '0';
				out[1] = '\0';
			}else
				out[cc] = '\0';
			printf("%s\n", out);
		}
	}while(sair==0);
	return 0;
}