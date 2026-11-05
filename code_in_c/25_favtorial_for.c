#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    long long fact = 1;

    int i = n;
    // for ( i=1; i<=n; i++ ) {
    //   fact *= i;
    // }
    for ( n=n; n>1; n-- ) {
        fact *= n;
    }
    printf("%d!=%d\n", i, fact);

    return 0;
}
