////
//// Created by Calvin on 15/11/27.
////
//
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<utility>
//#include<algorithm>
//#include<cstring>
//#include<set>
//using namespace std;
//
//#define mxn 1000
//#define MOD 100007
//#define LL long long
//#define MP make_pair
//#define REP(i, a, b) for (int i = a; i <= b; ++i)
//#define FOR(i, a, b) for (int i = a; i < b; ++i)
//
//
//char s[mxn+1];
//int dp[mxn+1][mxn+1];
//
////int F(int l,int r){
////    if(dp[l][r] != -1) return dp[l][r];
////    if(l == r) return dp[l][r] = 1;
////    if(l > r) return dp[l][r] = 0;
////    int res = 0;
////    if(s[l] == s[r]){
////        res = ( F(l+1,r) +F(l,r-1) + 1)%MOD;
////    }else{
////        res = ( F(l+1,r) + F(l,r-1)- F(l+1,r-1)) %MOD;
////
////    }
////    res =(res+MOD)%MOD;
////    return dp[l][r] = res;
////}
//
//int main(){
//    int T;
//    scanf("%d",&T);
//    for(int i = 1; i <= T;i++){
//        scanf("%s",s);
//        memset(dp,0,sizeof(dp));
//        int length = (int)strlen(s);
//        for(int i = 0 ;i<length;i++) dp[i][i] = 1;
//
//        for(int j = 1; j < length;j++){
//            for(int i = j-1; i>=0 ;i--){
//                if(s[i] == s[j]){
//                    dp[i][j] = (dp[i+1][j] + dp[i][j-1] +1) %MOD;
//                }else{
//                    dp[i][j] = ((dp[i+1][j] + dp[i][j-1] - dp[i+1][j-1]) %MOD + MOD)%MOD;
//                }
//            }
//        }
//
//        printf("Case #%d: %d\n",i,dp[0][length-1] %MOD);
//   }
//    return 0;
//}