#include <stdio.h> // 3번 문제: 수를 입력받고 각 자리를 더하는 값을 출력하시오.

int main(void){
  int k;
  int a, t=0;
  scanf("%d", &k);
  while(k != -1){
    while(k > 0){
      a=k%10;
      k=k/10;
      t=a+t;
    }
    printf("합 = %d\n", t);
    t=0;
    scanf("%d", &k);
    
  }
}
