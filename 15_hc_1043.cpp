////
//// Created by Calvin on 15/11/24.
////
//
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<utility>
//#include <algorithm>
//
//using namespace std;
//
//#define N_MAX 500
//#define M_MAX 100000
//int ans[M_MAX +1 ];
//int pre[M_MAX +1 ];
//int need[N_MAX +1];
//int value[N_MAX +1];
//
//int dp(int n, int m){
//    for(int j = 0 ;j <= m ; j++){
//        pre[j] = 0;
//    }
//
//    for( int i = 1; i <= n; i++){
//        for( int j = need[i]; j <= m ; j++ ) {
//            ans[j] = max( pre[j],ans[j - need[i]]+ value[i] );
//        }
//        for( int j = 1; j <=m ;j ++ ){
//            pre[j] = ans[j];
//        }
//    }
//    return ans[m];
//}
//
//
//int main(){
//    int N,M,i;
//
//    scanf("%d %d",&N,&M);
//    for( i = 1 ; i <= N ; ++i ){
//        scanf("%d %d", &need[i],&value[i]);
//    }
//
//    printf("%d\n",dp(N,M));
//
//    return 0;
//}