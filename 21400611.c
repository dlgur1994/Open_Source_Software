#include "21400611.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int reverse_digits(int n) {
    int result=0;
    
    while(1) {
        if(n<1)
            break;
        result = (10*result) + (n%10);
        n /= 10;
    }
    
    return result;
}

char * binarized(int n) {
    int buf[2048];
    char temp[2048];   //need to do
    int count = 0;
    char * result;
    
    while(n>0) {
        if(n==1){
            buf[count] = 1;
            break;
        }
        buf[count] = n%2;
        n /= 2;
        count++;
    }
    
    result = (char *)malloc(count*sizeof(char));
    
    for(int i=count ; i>-1 ; i--) {
        sprintf(temp, "%d", buf[i]);
        strcat(result, temp);
    }
    
    return result;
}

