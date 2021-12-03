
/* EX 1: permutation de tois nombre */
/*   a aide d'un variable temporel  */

#include <stdio.h>

int main () {
  int a,b,c,aide;
  printf("Donner les 3 valeur de a b c\n");
  scanf("%d%d%d",&a,&b,&c);

  printf("vous aver entre   a=%d\tb=%d\tc=%d\n",a,b,c);
  // permutation
  aide=a;
  a=b;
  b=c;
  c=aide;

  printf("les valeur devien a=%d\tb=%d\tc=%d\n",a,b,c);
  return 0;
}
