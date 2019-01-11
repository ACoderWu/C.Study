#include<stdio.h>
int main(){
  int a = 0;
  int b = 9;
  for(int i = b; i > 0; i--){
    a++;
    for(int j = 0; j < i; j++){
      printf("*");
      if(j < i-1){
        printf(" ");
      }
    }
    if(a < b){
      printf("\n");
    }
    for(int k = 0; k < a; k++){
      printf(" ");
    }
  }
  return 0;
}