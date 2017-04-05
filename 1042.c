#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int a, b, c, m, m1, m2;
	scanf("%d%d%d", &a,&b,&c);
	if(a==b && b==c){
		m=a;
		m1=b;
		m2=c;
	}else
		if(a==b&&b>c){
			m=a;
			m1=b;
			m2=c;
		}else
			if(a==c&&c>b){
				m=a;
				m1=c;
				m2=b;
			}else
				if(b==c&&c>a){
					m=c;
					m1=b;
					m2=a;
				}else
					if(a>b&&a>c)
						if(b>c){
							m=a;
							m1=b;
							m2=c;
						}else{
							m=a;
							m1=c;
							m2=b;
						}
					else
						if(b>a&&b>c)
							if(a>c){
								m=b;
								m1=a;
								m2=c;
							}else{
								m=b;
								m1=c;
								m2=a;
							}
						else
							if(a>b){
								m=c;
								m1=a;
								m2=b;
							}else{
								m=c;
								m1=b;
								m2=a;
							}
	
	printf("%d\n%d\n%d\n", m2,m1,m);
	printf("\n");
	printf("%d\n%d\n%d\n", a,b,c);
	return 0;
}