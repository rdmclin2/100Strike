////
//// Created by Calvin on 15/11/25.
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
//#define MAXN 10000000
//
//char str[MAXN+1];
//char strc[MAXN+1];
//int  strn[MAXN+1];
//
//int main() {
//
//    int N, n;
//    scanf("%d", &N);
//    while (N--) {
//        scanf("%d",&n);
//        scanf("%s",str);
//        strc[0] = str[0];
//        strn[0] = 1;
//        int index = 0;
//        for(int i = 1 ;i < n; i ++){
//            if(str[i-1] == str[i]){
//                strn[index] ++;
//            }else{
//                ++index;
//                strc[index] = str[i];
//                strn[index] = 1;
//            }
//        }
//        index ++;
//        bool success = false;
//        for(int i = 0; i < index-2;i++){
//            if((strc[i] + 1 == strc[i+1] && strc[i] + 2 ==strc[i+2]) && (strn[i] >= strn[i+1] && strn[i+1] <= strn[i+2])){
//               success = true;
//                break;
//            }
//        }
//        if(success){
//            printf("YES\n");
//        }else {
//            printf("NO\n");
//        }
//    }
//
//    return 0;
//};