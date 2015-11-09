////
//// Created by Calvin on 15/10/30.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
//
//#define ORI_SIZE 1000001
//#define PAIR_SIZE 10001
//
//char ori[ORI_SIZE];
//char par[PAIR_SIZE];
//int next[PAIR_SIZE];
//
//void swap(int * x, int * y){
//    int temp = *x;
//    *x = *y;
//    *y = temp;
//}
//
////next[j]的值（也就是k）表示，当P[j] != T[i]时，j指针的下一步移动位置。
//void calNext(char * pair,int * next){
//    int pLen = (int)strlen(pair);
//    next[0] = -1;
//    int k = -1;
//    int j = 0;
//    while (j < pLen)
//    {
//        //p[k]表示前缀，p[j]表示后缀
//        if (k == -1 || pair[j] == pair[k])
//        {
//            ++k;
//            ++j;
//            next[j] = k;
//        }
//        else
//        {
//            k = next[k];
//        }
//    }
//}
//
//int main(){
//    int N,i,j;
//
//    scanf("%d",&N);
//    while(N--){
//        scanf("%s",par);
//        scanf("%s",ori);
//        calNext(par,next);
//        int oriLength = (int)strlen(ori);
//        int parLength = (int)strlen(par);
//        i = 0,j = 0;
//        int cnt = 0;
//        while (i < oriLength){
//            if(j == -1 || ori[i] == par[j]){
//                i++;
//                j++;
//            }else{
//                j = next[j];
//            }
//            if(j == parLength) {
//                cnt++;
//            }
//        }
//
//        printf("%d\n",cnt);
//    }
//
//    return 0;
//}