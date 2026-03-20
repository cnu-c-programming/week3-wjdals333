#include <stdio.h>

int add(int a, int b) {
    return a+b;
}

int sub(int a, int b) {
    return a-b;
}

int mul(int a, int b) {
    return a*b;
}

int div(int a, int b) {
    if (b == 0)
    {
        return 0;
    }
    else {
        return a/b;
    }
}

int main(void)
// TODO : add, sub, mul, div 함수 작성

{
    int a = 10, b = 5;
    // TODO : printf
    printf("%d + %d = %d\n", a, b, add(a, b));
    printf("%d - %d = %d\n", a, b, sub(a, b));
    printf("%d * %d = %d\n", a, b, mul(a, b));
    printf("%d / %d = %d\n", a, b, div(a, b));
    return 0;
}
