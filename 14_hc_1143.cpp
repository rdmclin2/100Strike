////
//// Created by Calvin on 15/11/20.
////
//
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<utility>
//#include<algorithm>
//
//using namespace std;
//
//#define M 19999997
//
//typedef struct matrix{
//    long long mat[2][2];
//} MAT;
//
//MAT base,res;
//
//void init(){
//    res.mat[0][0] = 1;
//    res.mat[0][1] = 0;
//    res.mat[1][0] = 0;
//    res.mat[1][1] = 1;
//
//    base.mat[0][0] = 0;
//    base.mat[0][1] = 1;
//    base.mat[1][0] = 1;
//    base.mat[1][1] = 1;
//}
//
//
//MAT mul(MAT mat1, MAT mat2) {
//    MAT mat ;
//    for (int i = 0; i < 2; i++) {
//        for (int j = 0; j < 2; j++) {
//            mat.mat[i][j] = 0;
//            for (int k = 0; k < 2; k++) {
//                mat.mat[i][j] += mat1.mat[i][k] * mat2.mat[k][j]%M;
//            }
//            mat.mat[i][j] %= M;
//        }
//    }
//    return mat;
//
//}
//
//long long solve(int N) {
//
//    while (N != 0) {
//        if (N & 1) {
//            res = mul(base,res);
//        }
//        base = mul(base, base);
//        N = N >> 1;
//    }
//    return res.mat[1][1];
//}
//
//int main() {
//    int N;
//    while (scanf("%d", &N) !=EOF) {
//        init();
//        long long res = solve(N);
//        printf("%lld\n",  res% M);
//    }
//    return 0;
//}