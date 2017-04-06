#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 12

int main(){
  char mes[MAX][MAX] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

  int i;

  scanf("%d", &i);

  printf("%s\n", mes[i-1]);

  return 0;
}
