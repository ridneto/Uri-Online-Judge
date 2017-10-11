#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{	char str[3][55];
	int i=0, j;
	
	scanf("%s", str[0]);
	for(i=0, j=0;str[0][i] != '\0';i++)
		if(str[0][i] == 'a' || str[0][i] == 'e' || str[0][i] == 'i' || str[0][i] == 'o' || str[0][i] == 'u')
			str[1][j++] = str[0][i];
		
	for(i=1;i<3;str[i][j] = '\0', i++);
	for(i=strlen(str[1])-1, j=0; i>=0; str[2][j] = str[1][i], j++, i--);	
	
	if(!strcmp(str[1],str[2]))
		printf("S\n");
	else
		printf("N\n");
	return 0;
}