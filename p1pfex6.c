#include <stdio.h>

int main() {
  int n1, n2, menor = 0;

  do {
    scanf("%d %d", &n1, &n2);
    if(n1<n2) {
      menor = n1;
    }
    else if(n1!=n2) {
      menor = n2;
    }
  }
  while(n1!=n2);

  printf("Menor: %d\n", menor);

  return 0;
}
