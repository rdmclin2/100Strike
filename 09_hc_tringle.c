////
//// Created by Calvin on 15/11/13.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
//
//#define MAXN 100
//
//int puzzle[MAXN + 1][MAXN + 1];
//int best[MAXN + 1][MAXN + 1];
//
//void swap(int * x, int * y){
//    int temp = *x;
//    *x = *y;
//    *y = temp;
//}
//
//int max (int a, int b){
//    return a > b?a : b;
//}
//
//int min(int a,int b){
//    return a < b?a : b;
//}
//
//int dp(int n){
//    if(n < 1) return 0;
//    int i,j;
//    for(i = 1 ; i <= n ;++i){
//        for( j = 1; j <= n; ++j){
//            best[i][j] = max(best[i-1][j-1],best[i-1][j]) + puzzle[i][j];
//        }
//    }
//    int max = 0;
//    for( j = 1 ;j <=n; ++j){
//        if(best[n][j] > max){
//            max = best[n][j];
//        }
//    }
//    return max;
//}
//
//int main(){
//    int N ,i , j;
//    scanf("%d", &N) ;
//    memset(puzzle,0,sizeof(puzzle));
//    memset(best,0,sizeof(best));
//    for( i = 1 ; i <=  N ; ++i){
//        for( j = 1; j <= i; ++j){
//            scanf("%d",&puzzle[i][j]);
//        }
//    }
//    printf("%d\n",dp(N));
//
//    return 0;
//}