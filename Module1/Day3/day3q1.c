#include <stdio.h>
void numbers(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d", i);
    }
    for ( i = n - 1; i >= 1; i--) {
        printf("%d", i);
    }
}
void spaces(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf(" ");
    }
}
void pattern(int n) {
    int i;
    for ( i = n; i >= 1; i--) {
        numbers(i);
        spaces(2 * (n - i));
        numbers(i);
        printf("\n");
    }
}
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    pattern(n);

    return 0;
}
