#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
  int n;

  n=atoi(argv[1]);
  if(n < 1)
    exit(-1);
  if(n > 12) {
    printf("Input error\n");
    exit(-1);
  }

  for(int i=n ; i>0 ; i--) {
    for(int j=0 ; j<n-i ; j++) {
      printf(" ");
    }
    for(int j=0 ; j<(2*i)-1 ; j++) {
      printf("*");
    }
    for(int j=0 ; j<n-i ;j++) {
      printf(" ");
    }
    printf("\n");
  }

  return 0;
}
