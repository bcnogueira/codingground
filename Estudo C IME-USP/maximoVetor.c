#include <stdio.h>

int maximo (int n, int v[]) { 
   int j, x;
   x = v[0];
   for (j = 1; j < n; j += 1)
      if (x < v[j]) x = v[j];
   return x;
}