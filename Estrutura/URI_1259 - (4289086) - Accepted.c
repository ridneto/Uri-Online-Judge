#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//#include <ctype.h>
#include <limits.h>
#include <time.h>

#define MAX_TAM 100000

int Par[MAX_TAM], Impar[MAX_TAM];

int comparaC(const void *p1, const void *p2)
{	int *i, *j;
	
	i = (int *)p1;
	j = (int *)p2;

	if(*i < *j)
		return -1;
	else
		if(*i == *j)
			return 0;
		else
			return 1;
}

int comparaD(const void *p1, const void *p2)
{	int *i, *j;
	
	i = (int *)p1;
	j = (int *)p2;

	if(*i > *j)
		return -1;
	else
		if(*i == *j)
			return 0;
		else
			return 1;
}

int main()
{	
	int N, ni=0, np=0, in, c;
	
	#ifdef DEBUG
		double tInicio_=clock() ;
	#endif

	scanf("%d", &N);
	
	for (c = 0; c < N; c++){
		scanf("%d", &in);
		if(in%2==0){
			Par[np] = in;
			np++;
		}else{
			Impar[ni] = in;
			ni++;
		}			
	}
	
	if(np>0)
		qsort(Par, np, sizeof(int), comparaC);
	if(ni>0)
		qsort(Impar, ni, sizeof(int), comparaD);
	
	for (c = 0; c < np; c++)
		printf("%d\n", Par[c]);
	for(c=0;c < ni; c++)
		printf("%d\n", Impar[c]);
	
	#ifdef DEBUG
		printf( "Tempo: %.1lf %.1lf\n", clock() - tInicio_, (clock() - tInicio_)/CLK_TCK ) ;
	#endif
	
	return 0;
}
