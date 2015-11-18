////
//// Created by Calvin on 15/11/18.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
//#include <math.h>
//
//#define TIMES 1000
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
//    int T,i,j;
//
//    double k,skip;
//
//    scanf("%d",&T);
//    while(T--){
//        scanf("%lf",&k);
//        if(k == 0){
//            printf("%d\n",-1);
//            continue;
//        }
//        int res = 4;
//        for(i = 1 ; i <= TIMES/2; i++){
//            skip = 0.50000000/pow(2,i);
////            printf("skip: %.10lf\n",skip);
//            if(k < skip){
//                break;
//            }
//            else if(k == skip){
//                res = -1;
//                break;
//            }else{
//                k-=skip;
//                res+=4;
//            }
//        }
//        printf("%d\n",res);
//    }
//    return 0;
//}