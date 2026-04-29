// week04-5b.cpp SOIT107_BASE_004
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    if (N>=90) printf("A\n");
    else if (N>=80) printf("B\n");
    else if (N>=60) printf("C\n");
    else printf("F\n");
}
