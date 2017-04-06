#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 18
#define MAXTRES 15

char tres[MAXTRES] = {'a', 'A', '4', 'E', 'e', '3', 'i', 'I', '1', 'o', 'O', '0', 's', 'S', '5'};
int valeTres(char);

int main(){

  int t, i, j;
  char input[MAX];

  scanf("%d", &t);

  while(t--){
    scanf("%s", input);
    for(i=0, j=1; input[i] >= 32; i++)
      if(valeTres(input[i]))
        j *= 3;
      else
        j *= 2;

    printf("%d\n", j);
  }

  return 0;
}

int valeTres(char c){
  int i;
  
  for(i=0; i<MAXTRES; i++)
    if(c == tres[i])
      return 1;
  return 0;
}
