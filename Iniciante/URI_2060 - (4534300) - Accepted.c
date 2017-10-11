#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main (){
	
	int m2=0, m3=0, m4=0, m5=0, c, n, a;
	
	scanf("%d", &n);
	while(n>0){
		scanf("%d", &a);
		if(a%2==0)
			m2++;
		if(a%3==0)
			m3++;
		if(a%4==0)
			m4++;
		if(a%5==0)
			m5++;
		n--;
	}
	printf("%d Multiplo(s) de 2\n", m2);
	printf("%d Multiplo(s) de 3\n", m3);
	printf("%d Multiplo(s) de 4\n", m4);
	printf("%d Multiplo(s) de 5\n", m5);
		
	return 0;
}

