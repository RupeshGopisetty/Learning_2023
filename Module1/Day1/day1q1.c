#include <stdio.h>

int IfElse(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
int main() {
    int num1 = 10;
    int num2 = 20;

    int big = IfElse(num1, num2);
    printf("%d\n", big);
    return 0;
}
