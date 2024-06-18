#include <stdio.h>//6번 문제: 10개의 숫자를 입력받고, 입력된 숫자 중 1, 2, 3, 4, 5 각각의 개수를 세는 기능을 수행합니다.

int main(void){
  int num[10];
  int s[5]={0};
  int k=0;
  for(int i=0; i<10; i++){
    scanf("%d", &num[i]);
  }
  for(int i=0; i<10; i++){
    if(num[i]==1){
      s[0]++;
    }
    else if(num[i]==2){
      s[1]++;
    }
    else if(num[i]==3){
      s[2]++;
    }
    else if(num[i]==4){
      s[3]++;
    }
    else if(num[i]==5){
      s[4]++;
    }
  }
  for(int i=0; i<5; i++)
  printf("k가 %d인 갯수=%d\n", i+1, s[i]);

  return 0;
}
