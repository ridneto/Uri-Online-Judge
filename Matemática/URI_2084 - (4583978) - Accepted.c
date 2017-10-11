#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	int candidatos[10], c, n, tvotos=0, idMaior, vMaior=0, out=2;
	
	scanf("%d", &n);
	for(c=0;c<n;c++){
		scanf("%d ", &candidatos[c]);
		if(vMaior < candidatos[c]){
			vMaior = candidatos[c];
			idMaior = c;
		}
		tvotos += candidatos[c]; 
	}
	
	if(vMaior >= (45 * tvotos)/100)
		out = 1;
	else
		if(vMaior >= (40 * tvotos)/100){
			for(c=0;c<n;c++)
				if(c != idMaior)
					if(vMaior < candidatos[c] + (10 * tvotos) / 100)
						c = n;
			if(c == n)
				out = 1;
		}

	printf("%d\n", out);	
	
	return 0;
}