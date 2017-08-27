#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    int old_a = *a;
    *a += *b;
    *b = abs(old_a - *b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
