#include <stdio.h>
 
int main() {
 
    int Id, Qnt;
	float Preco;
	
	scanf("%d%d", &Id, &Qnt);
	if(Id==1)
		Preco = Qnt * 4;
	else
		if(Id==2)
			Preco = Qnt * 4.5;
		else
			if(Id==3)
				Preco = Qnt * 5;
			else
				if(Id==4)
					Preco = Qnt * 2;
				else
					Preco = 1.5 * Qnt;
	printf("Total: R$ %.2f\n", Preco);
 
    return 0;
}