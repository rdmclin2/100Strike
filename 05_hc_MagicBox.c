//
// Created by Calvin on 15/10/29.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define MAX 20000

void swap(int * x, int * y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sort(int *x,int *y ,int *z) {
    if (*x > *y) swap(x, y);
    if (*x > *z) swap(x, z);
    if (*y > *z) swap(y, z);
}

int main(){
    int x, y, z, i, cnt, max, diff1, diff2, diff3, R, Y , B ;
    char str[MAX];
    while(scanf("%d %d %d",&x,&y,&z) != EOF){
        sort(&x, &y, &z);
        max = cnt = R = Y = B = diff1 = diff2 = diff3 = 0;
        scanf("%s",str);
        int length = (int)strlen(str);
        for(i = 0 ;i < length ; ++i ){
            char c = str[i];
            if( ++cnt > max){
                max = cnt;
            }
            if( c == 'R' ) R++;
            if( c == 'Y' ) Y++;
            if( c == 'B') B++;
            diff1 = abs( R - Y );
            diff2 = abs( R - B );
            diff3 = abs( Y - B );

            sort(&diff1, &diff2, &diff3);
            if(diff1 == x && diff2 == y && diff3 == z){
                cnt = R = Y = B = 0;
            }
        }
        printf("%d\n", max);
    }
    return 0;
}
