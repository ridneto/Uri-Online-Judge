#include <stdio.h>

int main(){	
	
	int i;
	
	scanf("%d", &i);
	
	if(!i)
		printf("C\n");
	else{
		scanf("%d", &i);
		if(i)
			printf("A\n");
		else
			printf("B\n");
	}
	
	return 0;
}

