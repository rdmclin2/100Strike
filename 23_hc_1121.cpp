////
//// Created by Calvin on 15/12/4.
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
//#include <vector>
//#include <list>
//
//using namespace std;
//
//#define maxn 10000 +1
//#define maxm 40000
//#define MOD 100007
//#define EMPTY -1
//#define WHITE 0
//#define BLACK 1
//
//#define LL long long
//#define MP make_pair
//#define REP(i, a, b) for (int i = a; i <= b; ++i)
//#define FOR(i, a, b) for (int i = a; i < b; ++i)
//
////int e[maxn + 1][maxn + 1];
//int node[maxn];
//vector<int> vecs[maxn];
//
//int main() {
//    int T, M, N, n1, n2;
//    scanf("%d", &T);
//    list<int> lst;
//    while (T--) {
//        scanf("%d%d", &N, &M);
//        for(int i=1; i<=N; i++)//这一步很重要 一定要初始化清楚
//            vecs[i].clear();
//        memset(node, EMPTY, sizeof(node));
//        for (int i = 0; i < M; i++) {
//            scanf("%d%d", &n1, &n2);
//            vecs[n1].push_back(n2);
//            vecs[n2].push_back(n1);
//        }
//        lst.clear();
//        lst.push_back(n2);
//        node[n2] = WHITE;
//        int isError = false;
//        while (!lst.empty()) {
//            int cur = lst.front();
//            lst.pop_front();
//            for (int j = 0; j < vecs[cur].size(); j++) {
//                int other = vecs[cur].at(j);
//                if (node[other] == node[cur]) {
//                    isError = true;
//                    break;
//                } else if (node[other] == EMPTY) {
//                    node[other] = (node[cur] == WHITE ? BLACK : WHITE);
//                    lst.push_back(other);
//                }
//            }
//            if (isError) {
//                break;
//            }
//        }
//        if (!isError) {
//            printf("Correct\n");
//        } else {
//            printf("Wrong\n");
//        }
//    }
//    return 0;
//}