#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{	
	int mP, mL, mC, qL, qP, qC, t, i;
	char in[71];
	while(scanf("%d %d %d", &mP, &mL, &mC) != EOF){
		qL = 1;
		qP = 1;
		scanf("%s", in);
		qC = strlen(in);
		for(i=0, mP--;i<mP;i++){
			scanf("%s", in);
			t = strlen(in);
			if(qC + t + 1 <= mC)
				qC += t + 1;
			else{
				qL++;
				qC = t;
				if(mL < qL){
					qL=1;
					qP++;					
				}				
			}
		}
		printf("%d\n", qP);
	}
	return 0;
}