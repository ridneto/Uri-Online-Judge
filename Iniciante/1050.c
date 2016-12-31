#include <stdio.h>
#include <math.h>
 
int main() {
  
    int DD;
	
	scanf("%d", &DD);
	if(DD == 61){
		printf("Brasilia\n");
	}else
		if(DD == 71){
			printf("Salvador\n");
		}else
			if(DD == 11){
				printf("Sao Paulo\n");
			}else
				if(DD == 21){
					printf("Rio de Janeiro\n");
				}else
					if(DD == 32){
						printf("Juiz de Fora\n");
					}else
						if(DD == 19){
							printf("Campinas\n");
						}else
							if(DD == 27){
								printf("Vitoria\n");
							}else
								if(DD == 31){
									printf("Belo Horizonte\n");									
								}else{
									printf("DDD nao cadastrado\n");
								}					
								
    return 0;
}