#include <stdio.h>

char define(int , int, int);

int main(){
	int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	
	printf("%c\n", define(a, b, c));
	
	return 0;
}


char define(int a, int b, int c){
	int i;
	
	if(a < b){
		i = a;
		a = b;
		b = i;
	}
	if(a < c){
		i = a;
		a = c;
		c = i;
	}
		
	if(a >= b + c)
		return 'n';
	
	if(a*a < b*b + c*c)
		return 'a';
	
	if(a*a > b*b + c*c)
		return 'o';
	
	return 'r';
	
}