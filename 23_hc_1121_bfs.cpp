////
//// Created by Calvin on 15/12/7.
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
//
//using namespace std;
//
//#define maxn 10000 +1
////#define maxm 40000
//
//#define mxn 1000
//#define MOD 100007
//#define LL long long
//#define MP make_pair
//#define REP(i, a, b) for (int i = a; i <= b; ++i)
//#define FOR(i, a, b) for (int i = a; i < b; ++i)
//
//
//int node[maxn];
//vector<int> vecs[maxn];
//
//bool bfs(int n,int color){
//    node[n] = color;
//
//    for(int i = 0 ; i < vecs[n].size();i++){
//        int index = vecs[n].at(i);
//       if(!node[index] && !bfs(index,-color)){
//           return false;
//       }
//       else if(node[index] == node[n]){
//            return false;
//        }
//    }
//    return true;
//}
//
//
//int main() {
//    int T, M, N, n1, n2;
//    scanf("%d", &T);
//    while (T--) {
//        scanf("%d%d", &N, &M);
//        for (int i = 1; i <= N; i++)//这一步很重要 一定要初始化清楚
//            vecs[i].clear();
//        memset(node, 0, sizeof(node));
//        for (int i = 0; i < M; i++) {
//            scanf("%d%d", &n1, &n2);
//            vecs[n1].push_back(n2);
//            vecs[n2].push_back(n1);
//        }
//
//        if(bfs(n2,1)){
//            printf("Correct\n");
//        }
//        else {
//            printf("Wrong\n");
//        }
//
//    }
//    return 0;
//}