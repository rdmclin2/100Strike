////
//// Created by Calvin on 15/12/16.
////
//
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<utility>
//#include<algorithm>
//#include<cstring>
//#include<set>
//#include<queue>
//#include<list>
//#include<map>
//#include <vector>
//using namespace std;
//
//#define mxn 100000 + 1
//#define MOD 142857
//#define LL long long
//#define MP make_pair
//#define REP(i, a, b) for (int i = a; i <= b; ++i)
//#define FOR(i, a, b) for (int i = a; i < b; ++i)
//
//vector<int> neg[mxn];
//int in[mxn];
//int ve[mxn];
//
//int main(){
//    int N,M,K;
//    cin>>N>>M>>K;
//    int i;
//    memset(ve,0,sizeof(ve));
//    memset(in,0,sizeof(in));
//    while(K--){
//       cin>>i;
//        ve[i] += 1;
//    }
//    int u,v;
//    while(M--){
//        cin>>u>>v;
//        neg[u].push_back(v);
//        in[v] += 1;
//    }
//    bool getOne = true;
//    while(getOne){
//        getOne = false;
//        for(int i = 1 ; i<=N ;i++){
//            if(in[i] == 0){
//                int count = (int)neg[i].size();
//                for(int j = 0 ; j < count; j++){
//                    ve[neg[i][j]] = (ve[neg[i][j]] + ve[i]) % MOD;
//                    in[neg[i][j]] -=1;
//                }
//                in[i] = -1;//discard the node
//                getOne = true;
//            }
//        }
//    }
//    int sum = 0;
//    for(int i = 1 ; i <= N;i++) {
//        sum = (sum+ve[i]) % MOD;
//    }
//    cout<<sum<<endl;
//
//    return 0;
//}