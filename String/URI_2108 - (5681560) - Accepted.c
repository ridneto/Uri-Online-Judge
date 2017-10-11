#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX 105

int main(){ 	
	char in[MAX], strMaior[MAX];
	int tamMaior=0, i, j, k, tamVez, f, y;
	
	while(fgets(in, MAX, stdin) && strcmp(in, "0") != 0){
		for(i=0, tamVez=0, f=0, y=0; in[i] >= 32; i++){
			if(in[i] != ' ' && in[i+1] != '\n')
				tamVez++;
			else{
				if(in[i+1] == '\n'){
					tamVez++;
					y--;
				}
				if(f)
					printf("-%d", tamVez);
				else{
					f++;
					printf("%d", tamVez);
				}
				if(tamMaior <= tamVez){
					for(j=i-tamVez-y, k=0; k<tamVez; j++, k++)
						strMaior[k] = in[j];
					strMaior[k] = '\0';
					tamMaior = tamVez;
					y=0;
				}			
				tamVez = 0;
			}
		}
		printf("\n");
	}
	
	printf("\nThe biggest word: %s\n", strMaior);
	return 0;
}
