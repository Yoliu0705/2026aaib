// week14-4a.cpp SOIT106_ADVANCE_007
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int a = N / 1000;       // 计
    int b = N / 100 % 10;   // κ计
    int c = N / 10 % 10;    // 计
    int d = N % 10;         // 计

    if (a == d && b == c) printf("YES\n");
    else printf("NO\n");
}
