// week03-3b.cpp SOIT106_BASE_005
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
#include <stdio.h>

int main()
{
    int N;
    scanf("%zd", &N);
    int ans = 0;
    for (int i = 1; i<=N; i++) {
        if (N%i==0) ans++;
    }
    printf("%d\n", ans);
}
