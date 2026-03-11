// week03-3a.cpp SOIT106_BASE_008+++
#include <stdio.h>

int main()
{
  int a, b;
  scanf("%d%d", &a, &b);
  for (int i = a; i <= b; i++) {
       if (i%5==0) printf("%d\n", i);
  }
}

// week03-3b.cpp SOIT106_BASE_010
#include <stdio.h>

int main()
{
   int ans = 0;
   for (int i=0; i<10; i++) {
       int b;
       scanf("%d", &b);
       if (b%3==0) ans++;
   }
   printf("%d\n", ans);
}
