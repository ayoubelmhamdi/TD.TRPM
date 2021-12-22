#include <stdio.h>

void tri_tableu(int tab[], int n);

int main(int argc, char *argv[]) {
  int n1=6,n2=3,n3=n1+n2;
  int tab1[]={8,6,4,2,12,10};
  int tab2[]={5,15,10};
  int tab3[n3];


  tri_tableu(tab1,6);
  tri_tableu(tab2,3);
  for(int i=0;i<n3;i++){
    if(i<n1)
      tab3[i]=tab1[i];
    else
      tab3[i]=tab2[i-n1];
  }
  tri_tableu(tab3,n3);

  printf("\naffichage de tab1[]\n");
  for (int i = 0; i < n1; i++) {
    printf("%d\t",tab1[i]);
  }

  printf("\naffichage de tab2[]\n");
  for (int i = 0; i < n2; i++) {
    printf("%d\t",tab2[i]);
  }

  printf("\naffichage de tab3[]\n");
  for (int i = 0; i < n3; i++) {
    printf("%d\t",tab3[i]);
  }

  return 0;
}

  /* printf("saisir le dimention de tab1[]\n"); */
  /* scanf("%d",&n1); */
  /* for (int i = 0; i < n1; i++) { */
  /*   printf("tab1[%d]=",i); */
  /*   scanf("%d",&tab1[i]); */
  /* } */

  /* printf("saisir le dimention de tab2[]\n"); */
  /* scanf("%d",&n2); */

  /*   for (int i = 0; i < n2; i++) { */
  /*     printf("tab2[%d]=",i); */
  /*     scanf("%d",&tab2[i]); */
  /*   } */

void tri_tableu(int tab[], int n){
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      if(tab[i]>tab[j]){
        int aide=tab[i];
        tab[i]=tab[j];
        tab[j]=aide;
      }
    }
  }
}
