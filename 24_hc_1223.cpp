////
//// Created by Calvin on 15/12/14.
////
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<utility>
//#include<algorithm>
//#include<cstring>
//#include<set>
//#include<queue>
//#include<list>
//using namespace std;
//
//#define MOD 100007
//#define LL long long
//#define MP make_pair
//#define REP(i, a, b) for (int i = a; i <= b; ++i)
//#define FOR(i, a, b) for (int i = a; i < b; ++i)
//
//#define maxn 50
//string ope[maxn],X;
//int range[maxn];
//int main(){
//    int N;
//    cin>>N;
//    for(int i = 0; i< N;i++){
//        cin>>X>>ope[i]>>range[i];
//    }
//    int max = 0 ;
//    for(double i = -0.5; i <= 1000.5;i+= 0.5){
//        int cnt = 0;
//        for(int j = 0; j < N; j++){
//            if(ope[j] == "=" && i == range[j]){
//                cnt ++;
//            }else if(ope[j] == ">=" && i >= range[j]){
//                    cnt++;
//            }else if(ope[j] == ">" && i > range[j]){
//                    cnt++;
//            }else if(ope[j] =="<=" && i <= range[j]){
//                    cnt++;
//            }else if(ope[j]== "<"&&  i < range[j]){
//                    cnt++;
//            }
//        }
//        if(cnt > max){
//            max = cnt;
//        }
//    }
//   cout<<max<<endl;
//
//    return 0;
//}
