////
//// Created by Calvin on 15/12/3.
////
//#include <iostream>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//
//#define maxn 10000
//
//
//
//int findY(int n,int arr[]){
//    int s = sqrt(n);
//    int cnt = 0;
//    for(int i = 1; i<= s;i++){
//        if(n%i == 0){
//            arr[cnt++] = i;
//            int div = n/i;
//            if(div != i){
//                arr[cnt++] = div;
//            }
//        }
//    }
//    return cnt;
//}
//
//int main(){
//    int P,Q;
//    scanf("%d%d",&P,&Q);
//    int PY[maxn + 1];
//    int QY[maxn + 1];
//    int plength = findY(P,PY);
//    int qlength = findY(Q,QY);
//    sort(PY,PY+plength);
//    sort(QY,QY+qlength);
//    for(int i = 0 ; i< plength;i++){
//        for(int j = 0 ; j < qlength ; j++){
//            printf("%d %d\n",PY[i],QY[j]);
//        }
//    }
//    return 0;
//}
