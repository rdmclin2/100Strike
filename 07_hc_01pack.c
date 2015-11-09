////
//// Created by Calvin on 15/11/9.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
//
//#define N_MAX 500
//#define M_MAX 100000
////int ans[N_MAX+1][M_MAX+1];
//int ans[M_MAX +1 ];
//int need[N_MAX +1];
//int value[N_MAX +1];
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
//int dp(int n, int m){
//    int i,j;
//    for(j = 0 ;j <= m ; ++j){
//        ans[j] = 0;
//    }
//
//    for(i = 1; i <= n; ++i){
//        for(j = m; j >= need[i] ; --j ) {
//                ans[j] = max(ans[j - need[i]] + value[i], ans[j]);
//        }
//    }
//    return ans[m];
//}
//
//
//int main(){
//    int N,M,i,j;
//
//    scanf("%d %d",&N,&M);
//    for( i = 1 ; i <= N ; ++i ){
//        scanf("%d %d", &need[i],&value[i]);
////        printf("%d %d\n",need[i],value[i]);
//    }
//
//    printf("%d\n",dp(N,M));
//
//    return 0;
//}