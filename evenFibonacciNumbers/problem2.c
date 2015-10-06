#include <stdio.h>

int main (void){

  int num = 10;
  int sum = 0;
  for(int i = 0; i <= num; i++){
    if(fibonacci(1, 2, num) % 2 == 0){
      sum += fibonacci(1, 2, num);
    }
  }

  printf("Answer: %d\n", sum);
}

int fibonacci(int first, int second, int terms){
  if(terms <= 1){
    return first;
  }
  
  if(terms == 2){
    return second;
  }

  return fibonacci(second, first+second, terms-1);
}
  

