////
//// Created by Calvin on 15/11/17.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
//
//#define SIZE 100
//char a[SIZE +1];
//char sim[SIZE +1];
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
//int simplify(){
//    int length = (int)strlen(sim);
//    int i;
//    int index = 0;
//    int cnt  = 0 ;
//    char pre = sim[0],next;
//    int isDone = 0;
//    for(i = 1 ; i < length;i++){
//        next = sim[i];
//        if(next == pre){
//            isDone = 1;
//            cnt++;
//        }else{
//            if(cnt == 0 ){
//                sim[index++] = pre;
//            }else{
//                cnt = 0;
//            }
//            pre = next;
//        }
//    }
//    if(cnt == 0){
//        sim[index++] = pre;
//    }
//    sim[index] = '\0';
//
//    return isDone;
//}
//int main(){
//    int T,i,j;
//    scanf("%d",&T);
//    char *ABC = "ABC";
//    while(T--){
//        memset(a,0,sizeof(a));
//        scanf("%s",a);
//        int length = (int)(strlen(a));
//        int max = 0;
//        for(i = 0 ;i < length;i++){
//            for(j = 0 ;j < 3;j++){
//                memset(sim,0,sizeof(sim));
//                strncpy(sim,a,i);
//                strncat(sim+i,ABC+j,1);
//                strncpy(sim+i+1,a+i,length-i);
////                printf("%s\n",sim);
//                while(simplify() == 1)
//                    ;
//                int res = length - (int)strlen(sim) + 1;
//                if(res > max){
//                    max = res;
//                }
//            }
//        }
//        printf("%d\n",max);
//    }
//    return 0;
//}