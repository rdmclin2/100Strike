////
////  bestRouter.c
////  Hihocoder
////
////  Created by Calvin on 15/10/18.
////  Copyright © 2015年 CalvinMeng. All rights reserved.
////http://hihocoder.com/problemset/problem/1241
//
////时间限制:10000ms
////单点时限:1000ms
////内存限制:256MB
////描述
////给定一个N行N列的非负整数方阵，从左上角(1,1)出发，只能向下或向右走，且不能到达值为0的方格，求出一条到达右下角的最佳路径。所谓最佳路径是指途经的数的乘积的末尾连续的0最少。
////
////输入
////输入文件的第一行包含一个整数N，其中1≤N≤1000。
////
////接下来的N行每行包含N个非负整数，其中每个数小于等于1,000,000。
////
////数据保证至少存在一条不全为0的路径。
////
////输出
////输出文件仅一行，包含一个整数，表示要求的最佳路径上所有数字乘积的末尾连续零的个数。
////
////样例输入
////4
////1 3 0 0
////0 8 2 25
////6 5 0 3
////0 15 7 4
////样例输出
////2
//
//#include <stdio.h>
//#include <stdlib.h>
//
//#define N 1000
//
//#define inf 1000000
//
//int map[N+1][N+1];
//int map2[N+1][N+1];
//int map5[N+1][N+1];
//
//int count(int n,int k){
//    int cnt = 0;
//    while( n%k == 0){
//        cnt++;
//        n = n/k;
//    }
//    return cnt;
//}
//
//int max(int a,int b){
//    return a>=b?a:b;
//}
//
//int min(int a,int b){
//    return a <=b?a:b;
//}
//int main(){
//    
//    int n,i,j;
//    while(scanf("%d",&n) != EOF){
//        for(i = 1 ;i <= n ; ++i){
//            for(j = 1; j <= n; ++j){
//                scanf("%d", &map[i][j]);
//            }
//        }
//        
//        for(i = 1 ;i <= n ; ++i){
//            for(j = 1 ; j <= n; ++j){
//                if(map[i][j] == 0){
//                    map2[i][j] = inf;
//                    map5[i][j] = inf;
//                }else{
//                    map2[i][j] = count(map[i][j],2);
//                    map5[i][j] = count(map[i][j],5);
//                }
//            }
//        }
//        for (i=0; i<=n; ++i) {
//            map2[i][0]=map2[0][i] = inf;
//            map5[i][0]=map5[0][i] = inf;
//        }
//        map2[1][0]=map2[0][1] = 0;
//        map5[1][0]=map5[0][1] = 0;
//        
//        
//        for(i = 1 ;i <= n ; ++i){
//            for(j = 1 ; j <= n; ++j){
//                map2[i][j] = map2[i][j] + min(map2[i-1][j], map2[i][j-1]);
//                map5[i][j] = map5[i][j] + min(map5[i-1][j], map5[i][j-1]);
//            }
//        }
//        
//        
//        printf("%d\n",min(map2[n][n],map5[n][n]));
//        
//    }
//    return 0;
//}
//
//
