#include <stdio.h>
#include <math.h>
 
int main() {
  
    int Tempo, Hora, Min;
	
	scanf("%d", &Tempo);
	
	Hora = Tempo / 3600;
	Tempo = Tempo - Hora * 3600;
	Min = Tempo / 60;
	Tempo = Tempo - Min * 60;
	printf("%d:%d:%d\n", Hora, Min, Tempo);
	
    return 0;
}