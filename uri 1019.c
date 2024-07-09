#include <stdio.h>

int main() {

    int n, seg, hr, min, mins;

    scanf("%d", &n);

    seg = n / 60;
    seg  = n - seg * 60;
    min = n % 60;
    mins = n / 60;
    min = mins % 60;
    hr = mins / 60;

    printf("%d:%d:%d\n", hr, min, seg);
    return 0;
}
