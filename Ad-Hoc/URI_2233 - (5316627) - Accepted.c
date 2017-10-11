#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{	
	long long int r, g, b, rg, gb, out=1;
	
	scanf("%llx %llx %llx", &r, &g, &b);
	rg = pow(r/g,2);
	gb = pow(g/b,2);
	if(r>=g && g>=b)
		out += gb * rg + rg;	
	else
		if(r>=g && g < b)
			out += rg;
	printf("%llx\n", out);
	return 0;
}