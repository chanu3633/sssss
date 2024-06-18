#include <stdio.h> // 보기 편하게 

int main(void) {
    int a, b;
    char ch;

    printf("원하는 사칙 연산을 입력하시오: ");
    scanf(" %c", &ch);

    printf("원하는 숫자 두 개를 입력하시오: ");
    scanf("%d %d", &a, &b);

    while (ch != '0') {
        switch (ch) {
            case '+':
                printf("%d + %d = %d\n", a, b, a + b);
                break;
            case '-':
                printf("%d - %d = %d\n", a, b, a - b);
                break;
            case '*':
                printf("%d * %d = %d\n", a, b, a * b);
                break;
            case '/':
                printf("%d / %d = %d\n", a, b, a / b);
                break;
        }
        ch = ' ';
        printf("원하는 사칙 연산을 입력하시오: ");
        scanf(" %c", &ch);
        printf("원하는 숫자 두 개를 입력하시오: ");
        scanf("%d %d", &a, &b);
    }

    return 0;
}
