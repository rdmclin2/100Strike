////
////  mxLovesGame.c
////  Hihocoder
////
////  Created by Calvin on 15/10/19.
////  Copyright © 2015年 CalvinMeng. All rights reserved.
////
////时间限制:12000ms
////单点时限:1000ms
////内存限制:256MB
////描述
////MX最近迷上了有趣的方阵变换游戏。
////
////游戏中的方阵都具有优美的性质：设方阵的大小是n×n，那么它的每一行、每一列都恰好包含了1~n所有数字。
////
////MX现在有两个方阵A和B。他每次可以交换A的任意两行或任意两列。他想知道最终能否将A变成B？如果可以，请告诉他最少总操作次数；如果不可以，请输出-1。
////
////输入
////第一行一个整数n(1≤n≤300)。
////
////接下来n行，每行n个由空格隔开的整数，表示方阵A的元素。
////
////接下来是一个空行。
////
////接下来n行，每行n个由空格隔开的整数，表示方阵B的元素。
////
////保证A和B都是满足题中所描述的性质。
////
////输出
////输出一个整数作为答案。
////
////样例解释
////交换第2,4行；交换第1,3列。
////
////样例输入
////4
////1 4 2 3
////4 2 3 1
////2 3 1 4
////3 1 4 2
////
////2 4 1 3
////4 1 3 2
////1 3 2 4
////3 2 4 1
////样例输出
////2
//
//#include <stdio.h>
//
//#define N 300
//
//#define INF 5000
//
//int A[N][N];
//int B[N][N];
//int column[N];
//int row[N];
//
//
//int checkSame(int n){
//    int i,j;
//    for (i=0; i<n; ++i) {
//        for (j=0; j<n; ++j) {
//            if (A[row[i]][column[j]] !=B[i][j]) {
//                return 0;
//            }
//            
//        }
//    }
//    return 1;
//}
//
//void printMap(int n){
//    int i,j;
//    printf("\n");
//    for (i=0; i<n; ++i) {
//            for (j=0; j<n; ++j) {
//                printf("%d ", A[row[i]][column[j]]);
//            }
//        printf("\n");
//        }
//    
//    
//    return ;
//}
//
//void swap(int * a ,int * b){
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//    return ;
//}
//
//int solve(int n){
//    int i,j,cnt = 0;
//    
//    for (i=0; i < n; ++i) {
//        column[i]=i;
//    }
//    
//    for (i=0; i < n; ++i) {
//        for (j=0; j<n; ++j) {
//            if(A[row[0]][column[j]] == B[0][i]){
//                if(i!=j){
//                    swap(&column[i],&column[j]);
//                    cnt++;
//                }
//            }
//        }
//    }
//    
//    for (i=0; i < n; ++i) {
//        for (j=0; j<n; ++j) {
//            if(A[row[j]][column[0]] == B[i][0]){
//                if(i !=j){
//                    swap(&row[i],&row[j]);
//                    cnt++;
//                }
//            }
//        }
//    }
//
//    if(!checkSame(n)){
//        return INF;
//    }else{
//        return cnt;
//    }
//}
//
//
//
//int min(int a,int b){
//    return a <=b?a:b;
//}
//
//int main()
//{
//    int n,i,j;
//    while (scanf("%d",&n) != EOF) {
//        for (i=0; i<n; ++i) {
//            for (j=0; j<n; ++j) {
//                scanf("%d",&A[i][j]);
//            }
//        }
//        getchar();
//        for (i=0; i<n; ++i) {
//            for (j=0; j<n; ++j) {
//                scanf("%d",&B[i][j]);
//            }
//        }
//        
////        printMap(n);
//        
//        
//        int ans = INF;
//        
//        for (i=0; i<n; ++i) {
//            for (j=0; j<n; ++j) row[j] = j;
//            for (j=0; j<n; ++j) column[j] = j;
//            int tmp = 0;
//            if(i != 0){
//                swap(&row[i],&row[0]);
////                printMap(n);
//                tmp = 1;
//            }
//            int result = solve(n);
////            printf("%d",result);
//            ans = min(ans,result+tmp);
//        }
//        if(ans >= INF){
//            printf("%d",-1);
//        }else{
//            printf("%d",ans);
//        }
//        
//    }
//    return 0;
//}