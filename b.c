#include <stdio.h>// 7번 문제:  두 개의 2차원 배열 A와 B를 더한 결과를 배열 C에 저장하고, C 배열의 값을 출력하는 코드입니다.

int main (void){
  int A[2][3]={{2,1,-1},{3,0,1}};
  int B[2][3]={{-3,1,1},{2,-2,1}};
  int C[2][3]={0};

  for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
      C[i][j]=A[i][j]+B[i][j];
    }
  }
  for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
      printf("%3d",C[i][j]);
    }
    printf("\n");
  }

    return 0;
}
