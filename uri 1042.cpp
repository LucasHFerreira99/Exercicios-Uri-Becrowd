#include <bits/stdc++.h>
using namespace std;

int main() {
    int c[3],v[3], sent, i ,j,n;

    scanf("%d %d %d", &c[0],&c[1], &c[2]);
    for (i = 0; i < 3; ++i)
    {
        v[i] = c[i];
    }
    n = 3;

    sort(c, c+3);

    for (int i = 0; i < 3; ++i)
    {
        printf("%d\n", c[i]);
    }
    printf("\n");
    for (int i = 0; i < 3; ++i)
    {
        printf("%d\n", v[i]);
    }
    return 0;
}
