#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main (void){

	int qnt, digito, leds=0, c;
	char numero[105];
	scanf("%d", &qnt);	
	while(qnt>=1){
		scanf("%s", &numero);
		for(c=0;c<strlen(numero);c++)
		{
			if(numero[c]=='1')
				leds = leds + 2;
			else
				if(numero[c] == '2' || numero[c] == '3' || numero[c] == '5')
					leds = leds + 5;
				else
					if(numero[c] == '4')
						leds = leds + 4;
					else
						if(numero[c] == '6' || numero[c] == '9' || numero[c] == '0')
							leds = leds + 6;
						else
							if(numero[c] == '7')
								leds = leds + 3;
							else
								leds = leds +7;
		}				
		printf("%d leds\n", leds);
		leds = 0;
		qnt--;
	}	
	
	return 0;
}