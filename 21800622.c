#include "21800622.h"
#include <stdio.h>
#include <stdlib.h>

int sort_digits(int n) {
  int num = n;
  int count = 0;
  int temp;

  while(num>0) {
    num /= 10;
    count++;
  }

  int sort[count];
  for(int i=0 ; n>0 ; i++) {
    sort[i] = n%10;
    n /= 10;
  }

  for(int i=0; i<count; i++) {
    for(int j=0; j<count-1; j++) {
      if(sort[j] > sort[j+1]) {
        temp = sort[j];
        sort[j] = sort[j+1];
        sort[j+1] = temp;
      }
    }
  }

  num = 0;
  for (int i=0 ; i<count ; i++) {
    num = 10 * num + sort[i];
  }  

  return num;
}

boolean isPrime(int n){
	int i = 0;

	if(n == 2) { return true; }

	if(n < 2) { return false; }

	for(i = 2; i < n; i++){
		if(n % i == 0){
			return false;
		}
	}return true;
}

