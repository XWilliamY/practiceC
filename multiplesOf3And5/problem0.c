#include <stdio.h>

int main(void){
  int sum = 0;

  for(int i = 1; i < 1000; i++){
    if(i % 3 == 0 || i % 5 == 0){
      printf("Number evaluated: %d\n", i);
      sum += i;
      printf("Sum now: %d\n", sum);
    }
    
  }

  printf("%d\n", sum);
}
