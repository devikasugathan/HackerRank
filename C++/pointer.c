#include <stdlib.h>
#include <stdio.h>
 
int main()
{
   int a, b, *p, *q, s,d;
   scanf("%d%d", &a, &b);
 
   p = &a;
   q = &b;
 
  s = *p + *q;
  d =*p - *q; 
    int m=abs(d);
   printf("%d\n%d", s, m);
 
   return 0;
}

