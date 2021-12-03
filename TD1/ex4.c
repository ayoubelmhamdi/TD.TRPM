
/* EX 2: calcule de factoriel */

#include <stdio.h>

int main() {
  int a;
  printf("Calcule de calcule de factorier\n");
  printf("Donner la valeur pour lesquelles vous souhaitez calculer son factoriel\n");
  scanf("%d", &a);

  printf("--------------------------------\n");
  printf("vous avez saisir: %d\n\n", a);

  int factoriel=1;
  for (int i = 2; i <= a; i++) {
    factoriel*=i;
  }

  printf("Le factoriel de %d egal: %d\n", a,factoriel);



  printf("\n\n\n\n\n\n");
  return 0;
}
