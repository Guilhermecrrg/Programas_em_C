#include <stdio.h>

int main() {
  int idade;
  scanf("%d", &idade);
   if(idade < 16) {
     printf("nao eleitor\n");
   }
   else if(idade < 18 || idade > 64) {
     printf("facultativo\n");
   }
   else {
     printf("obrigatorio\n");
   }
  return 0;
}
