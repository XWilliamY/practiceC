#include <stdio.h>

int main (void){

  int num = 10;
  int sum = 0;
  fibonacci(num);

  printf("Answer: %d\n", sum);
}

int fibonacci(num){
  if(num <= 1){
    return 1;
  }

  return helper(num);
}

int helper(int prev2, int prev1, int term){
  return helper(prev2+prev1, prev1, term);
}

