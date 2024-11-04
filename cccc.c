#include <stdio.h>//11번
int sorting(int num[]);
int main(void){
  int num[10]={0};

  for(int i=0; i<10; i++){
    scanf("%d", &num[i]);
  }
  sorting(num);
}
int sorting(int num[]){
  int temp=0;
  for(int i=0; i<9; i++){
    for(int j=0; j<9-i; j++){
      if(num[j]>num[j+1]){
        temp=num[j];
        num[j]=num[j+1];
        num[j+1]=temp;
      }
    }
  }
  for(int i=0; i<10; i++){
    printf("%3d",  num[i]);
  }
}
