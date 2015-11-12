//
// Created by Calvin on 15/11/12.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define MAX 1000000
char str[MAX+1];
char str_src[MAX * 2 + 2];
int p[MAX *2 + 2];

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

int getLength(char * s){
    int id=1,mx = 0,i;
    memset(p,0,sizeof(p));

    for(i = 1 ; s[i] != '\0'; ++i){
        p[i] = i < mx ? min(p[id * 2 - i],mx-i): 1;
        while(s[i + p[i]] == s[i - p[i]]){
            p[i]++;
        }
        if( i + p[i] > mx){
            mx = i + p[i];
            id = i;
        }
    }
    int max = p[1];
    for(i = 1 ; s[i] != '\0'; ++i){
        if(p[i] > max){
            max = p[i];
        }
    }
    return max -1;
}

int main(){
    int N,i;
    scanf("%d",&N);
    while(N--){
        scanf("%s",str);
        int length = (int)strlen(str);
        if(length == 0 ){
            printf("%d\n",0);
        }
        str_src[0] = '$';
        str_src[1] = '#';
        int index = 2;
        for(i = 0 ; i< length; ++i){
            str_src[index++] = str[i];
            str_src[index++] = '#';
        }
        str_src[index] = '\0';
//        fflush(stdin);
        int res = getLength(str_src);
        printf("%d\n",res);
    }

    return 0;
}