
/* EX 2: calcule de equation de premier order */

#include <stdio.h>

int main() {
  int a, b, c;
  printf("calcule de equation de premier order\n");
  printf("Donner les 2 valeurs de a b  \n");
  scanf("%d%d", &a, &b);

  printf("--------------------------------\n");
  printf(" les solution de %dx+%d=0 est :\n", a, b);

  if (a == 0 && b == 0) {
    printf(" S = R\n");
  } else if (a == 0) {
    printf("il n'y a pas de soultion de l'equation dans R\n");
  } else if (b == 0) {
    printf(" S= { 0 }\n");
  } else {
    printf(" S= { %.02f }\n",(float)-b/a);
    printf("\nn'accept pas la virgure S= { %d }\n",-b/a); // fault de calcule : 2x-1=0
  }

  printf("\n\n\n\n\n\n");
  return 0;
}
