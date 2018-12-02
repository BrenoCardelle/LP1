#include <stdio.h>

int vs[15][20];

void preenche(int l, int c) {
   int i,x;
   for(i=0; i < l; i++) {
      for(x = 0; x < c; x++) {
        scanf("%d", &vs[x][i]);
      }
   }
}

float media (int l, int c) {
   float soma = 0;
   int z,y;
   for (z = 0; z < c; z++) {
     for (y = 0; y < l; y++) {
       soma = soma + vs[z][y];
	printf("%d\n", vs[z][y]);
     }
   }

   float med = soma/(l*c);
   return med;
}

int main (void) {

  int li,co;
  float med=0;
  scanf("%d", &li);
  scanf("%d", &co);
  preenche(li, co);
  med = media(li, co);
  printf("Media = %.2f\n", med);
  return 0;
}
