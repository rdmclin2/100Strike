#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void swap(int * x, int * y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int max (int a, int b){
    return a > b?a : b;
}

int min(int a,int b){
    return a < b?a : b;
}

int main(){

    return 0;
}