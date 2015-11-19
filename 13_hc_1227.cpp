//
// Created by Calvin on 15/11/19.
//

#include<iostream>
#include<cstdio>
#include<cmath>
#include<utility>
#include<algorithm>

using namespace std;

#define MAX 100+1
#define RANGE (int)(1000 * 2 * sqrt(2))

pair<double,double>p[MAX];
double r[MAX];

int main() {
    int T, M, N, i, j;
    scanf("%d", &T);

    while (T--) {
        scanf("%d %d", &M, &N);
        for (i = 0; i < M; i++) {
            scanf("%lf %lf", &p[i].first,&p[j].second);
        }
        int ans = RANGE;
        for (i = 0; i < M; i++) {
            double R;
            for (j = 0; j < M; j++) {
                r[j] = sqrt(
                        pow(p[i].first - p[j].first, 2.0) + pow(p[i].second - p[j].second, 2.0));
                sort(r,r+M);
                R = ceil(r[N-1]);
                R = R == r[N-1]?R+1:R;
                if(M !=N && R >=r[N]) continue;
                if(R<ans)ans=(int)R;
            }
        }
        if(ans==RANGE)
        {
            printf("%d\n",-1);
            continue;
        }
        printf("%d\n",ans);
    }
    return 0;
}