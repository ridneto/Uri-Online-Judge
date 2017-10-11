#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	int id, p, qnt;
	float total=0;
	
	scanf("%d", &p);
	
	while(p>0){
		scanf("%d %d", &id,&qnt);
		if(id==1001)
			total += (qnt * 1.50);
		else
			if(id==1002)
				total += (qnt * 2.50);
			else
				if(id==1003)
					total += (qnt * 3.50);
				else
					if(id==1004)
						total += (qnt * 4.50);
					else
						if(id==1005)
							total += (qnt * 5.50);
		p--;
	}
	printf("%.2lf\n", total);
	return 0;
}