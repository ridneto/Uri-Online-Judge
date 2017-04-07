#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	float i=0, j1=1, j2=2, j3=3;
	while(i<2){	
		if(i == 0 || i == 1 || i == 2){
			printf("I=%.0f J=%.0f\n", i, j1);
			printf("I=%.0f J=%.0f\n", i, j2);
			printf("I=%.0f J=%.0f\n", i, j3);
		}else{
			printf("I=%.1f J=%.1f\n", i, j1);
			printf("I=%.1f J=%.1f\n", i, j2);
			printf("I=%.1f J=%.1f\n", i, j3);
		}
		i = i + 0.2;
		j1 = j1 + 0.2;
		j2 = j2 + 0.2;
		j3 = j3 + 0.2;
	}
	i = 2;
	j1 = 3;
	j2 = 4;
	j3 = 5;
	printf("I=%.0f J=%.0f\n", i, j1);
	printf("I=%.0f J=%.0f\n", i, j2);
	printf("I=%.0f J=%.0f\n", i, j3);
	return 0;
}