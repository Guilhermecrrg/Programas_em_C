#include <stdio.h>
#include <string.h>

int main() {

  char palavra1[30];

  scanf("%30[^\n]", palavra1);
  int i;

  for(i=strlen(palavra1)-1; i>=0; i--) {
    printf("%c", palavra1[i]);
  }

  return 0;
}
