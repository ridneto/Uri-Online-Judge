#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	char carac1[15], carac2[15], carac3[15];
	int c;
	scanf("%s", carac1);
	scanf("%s", carac2);
	scanf("%s", carac3);
	if(strcmp(carac1,"vertebrado")==0)
		if(strcmp(carac2,"ave")==0)
			if(strcmp(carac3,"carnivoro")==0)				
				printf("aguia\n");
			else
				printf("pomba\n");
		else
			if(strcmp(carac3,"onivoro")==0)
				printf("homem\n");
			else
				printf("vaca\n");
	else
		if(strcmp(carac2,"inseto")==0)
			if(strcmp(carac3,"hematofago")==0)
				printf("pulga\n");
			else
				printf("lagarta\n");
		else
			if((strcmp(carac3,"hematofago")==0))
				printf("sanguessuga\n");
			else
				printf("minhoca\n");
	return 0;
}