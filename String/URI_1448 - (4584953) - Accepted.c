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
	
	char in[110], t1[110], t2[110];
	int n, i, c, p1, p2, cd, acerto1, acerto2;
	scanf("%d",&n);
	LimpaBuffer();
	for(i=1;i<=n;i++){
		fgets(in,110,stdin);
		fgets(t1,110,stdin);
		fgets(t2,110,stdin);	
	//	printf("%s\n%s\n%s\n", in,t1,t2);
		for(c=0, p1=0,p2=0, cd=0;in[c] != 10;c++){
			if(in[c] == t1[c]){
				p1++;
				acerto1=1;
			}else
				acerto1=0;
			if(in[c] == t2[c]){
				p2++;
				acerto2=1;
			}else
				acerto2=0;
			if(cd==0)
				if(acerto1 != acerto2)
					if(acerto1 == 1)
						cd = 1;
					else
						cd = 2;				
		}
			
		printf("Instancia %d\n", i);
		if(p1 > p2)
			printf("time 1\n");
		else
			if(p2 > p1)
				printf("time 2\n");
			else
				if(cd==0)
					printf("empate\n");
				else
					if(cd==1)
						printf("time 1\n");
					else
						printf("time 2\n");
		printf("\n");
	}
	return 0;
}

