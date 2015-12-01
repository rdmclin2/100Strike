//
// Created by Calvin on 15/12/1.
//

#include<iostream>
#include<cstdio>
#include<cmath>
#include<utility>
#include<algorithm>
#include<cstring>
#include<set>
using namespace std;

#define mxn 200
#define MOD 100007
#define LL long long
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; ++i)
#define FOR(i, a, b) for (int i = a; i < b; ++i)


int main(){
    int N,M;
    cin>>N>>M;
    char map[N][M];
    char pos[3][3];
    for(int i = 0; i < N ;i ++){
        for(int j = 0 ; j< M; j++){
            cin>> map[i][j];
//            cout<<map[i][j];
        }
    }
    for(int i = 0; i < 3; i ++){
        for(int j = 0 ; j < 3 ; j++){
            cin>> pos[i][j];
//            cout<<pos[i][j];
        }
    }
    for(int i = 0 ;i < N-2;i++){
        for(int j = 0 ; j< M -2; j++){
            if(pos[1][1] == map[i+1][j+1]){

                if(map[i][j] == pos[0][0] && map[i][j+1] == pos[0][1] && map[i][j+2] == pos[0][2]
                  && map[i+1][j] == pos[1][0] && map[i+1][j+2] == pos[1][2]
                   && map[i+2][j] == pos[2][0] && map[i+2][j+1] == pos[2][1] && map[i+2][j+2] == pos[2][2]){
                    cout<<i+2<< " " <<j+2<<endl;
                    continue;
                }
                if(map[i][j] == pos[0][2] && map[i][j+1] == pos[1][2] && map[i][j+2] == pos[2][2]
                   && map[i+1][j] == pos[0][1] && map[i+1][j+2] == pos[2][1]
                   && map[i+2][j] == pos[0][0] && map[i+2][j+1] == pos[1][0] && map[i+2][j+2] == pos[2][0]){
                    cout<<i+2<< " " <<j+2<<endl;
                    continue;
                }
                if(map[i][j] == pos[2][2] && map[i][j+1] == pos[2][1] && map[i][j+2] == pos[2][0]
                   && map[i+1][j] == pos[1][2] && map[i+1][j+2] == pos[1][0]
                   && map[i+2][j] == pos[0][2] && map[i+2][j+1] == pos[0][1] && map[i+2][j+2] == pos[0][0]){
                    cout<<i+2 << " " <<j+2<<endl;
                    continue;
                }
                if(map[i][j] == pos[2][0] && map[i][j+1] == pos[1][0] && map[i][j+2] == pos[0][0]
                   && map[i+1][j] == pos[2][1] && map[i+1][j+2] == pos[0][1]
                   && map[i+2][j] == pos[2][2] && map[i+2][j+1] == pos[1][2] && map[i+2][j+2] == pos[0][2]){
                    cout<<i+2<< " " <<j+2<<endl;
                    continue;
                }
            }

        }
    }

    return 0;
}