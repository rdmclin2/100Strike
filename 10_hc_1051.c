////
//// Created by Calvin on 15/11/16.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
//
//#define SIZE 100
//int a[SIZE +1 ];
//int diff[SIZE+2];
//
//
//void swap(int * x, int * y){
//    int temp = *x;
//    *x = *y;
//    *y = temp;
//}
//
//int max (int a, int b){
//    return a > b?a : b;
//}
//
//int min(int a,int b){
//    return a < b?a : b;
//}
//
//int main(){
//    int T,M,N,i,j;
//    scanf("%d", &T);
//    while(T--){
//        scanf("%d %d",&N,&M);
//        memset(a,0,sizeof(a));
//        memset(diff,0,sizeof(diff));
//        for(i = 1 ; i <= N ; i++){
//           scanf("%d", &a[i]) ;
//        }
//
//        if(M >= N ){
//            printf("%d\n",100);
//            continue;
//        }
//
//        diff[0] = a[1] - 1 ;
//        for(i = 1; i < N ;i++){
//            diff[i] = a[i + 1] - a[i] -1;
//        }
//        diff[N] = SIZE - a[N];
//
//        int max = 0;
//        for( i = 0 ; i <= N-M ;i++){
//            int sum = 0;
//            for(j = i; j <= i+M ; j++){
//                sum += diff[j];
//            }
//            sum += M;
//            if(sum > max){
//                max = sum;
//            }
//        }
//        printf("%d\n",max);
//    }
//    return 0;
//}