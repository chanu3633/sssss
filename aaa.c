#include <stdio.h>//10번 문제

int main(void){
  int a, b, c;
  char ch;
  printf("원하는 사칙 연산을 입력하시오.:");
  scanf("%c", &ch);
  printf("원하는 숫자 두개를 입력하시오.:");
  scanf("%d %d", &a, &b);

  while(ch != 48){
    switch(ch){
      case 43: printf("%d + %d = %d\n", a, b, a+b);
      break;
      case 45: printf("%d - %d = %d\n", a, b, a-b);
      break;
      case 42: printf("%d * %d = %d\n", a, b, a*b);
      break;
      case 47: printf("%d / %d = %d\n", a, b, a/b);
      break;
    }
    ch=0;
    scanf("%c", &ch);
    printf("원하는 사칙 연산을 입력하시오.:");
    scanf("%c", &ch);
    printf("원하는 숫자 두개를 입력하시오.:");
    scanf("%d %d", &a, &b);
  }

  return 0;
}
