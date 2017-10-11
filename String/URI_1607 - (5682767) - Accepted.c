#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX 10005

int main(){ 	
	char a[MAX], b[MAX];
	int n, i, soma, aux;
	
	scanf("%d", &n);
	while(n--){
		scanf("%s %s", a, b);
		for(i=0, soma=0; a[i] >= 'a'; i++){
			aux = b[i] - a[i];			
			if(aux < 0)
				aux += 26;
			soma += aux;
		}
		printf("%d\n", soma);
	}
	
	
	return 0;
}
