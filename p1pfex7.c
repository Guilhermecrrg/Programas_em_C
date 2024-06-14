#include <stdio.h>

int main() {
  int ini, fim, i;
  scanf("%d %d", &ini, &fim);

  if(ini%2 != 0) {
    ini++;
  }

  for(i=ini; i<=fim; i=i+2) {
    printf("%d ", i);
  }

  printf("\n");

  return 0;
}
