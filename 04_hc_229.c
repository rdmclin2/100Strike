//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
//
//#define SIZE_MONTH 12
//
///*
// * 1. 年份能被4整除但不能被100整除
//
//   2. 年份能被400整除
// */
//
//int isLeapYear(int year){
//    return (year%4 ==0 && year%100 !=0) || year % 400 == 0;
//}
//void isLeapYear_test() {
//    assert(isLeapYear(2004) == 1);
//    assert(isLeapYear(2005) == 0);
//    assert(isLeapYear(2100) == 0);
//    assert(isLeapYear(2012) == 1);
//}
//
//int getMonth( char *month){
//    char * months[SIZE_MONTH] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November" , "December"};
//    int i;
//    for( i = 0 ;i < SIZE_MONTH; ++i ){
//        if( strcmp( month, months[i] ) == 0 ){
//            return (i+1);
//        }
//    }
//    return 1;
//}
//
//
//int getCount(int y, int m , int d ){
//    int cnt = y/4 - y /100 + y/400;
//    if(isLeapYear(y) && (m < 2 || (m ==2 && d < 29))){
//        cnt--;
//    }
//    return cnt;
//}
//
//int main(){
//    //isLeapYear_test();
//    int i,T,y,m,d;
//    char month[20];
//
//    scanf("%d",&T);
//    for(i = 0; i < T; ++i){
//        int cnt = 0;
//        scanf("%s %d, %d",month,&d,&y);
//        m = getMonth(month);
//        cnt -= getCount(y,m,d);
//
//        if(isLeapYear(y) && m == 2 && d == 29){
//            cnt++;
//        }
//
//        scanf("%s %d, %d",month,&d,&y);
//        m = getMonth(month);
//        cnt += getCount(y,m,d);
//        printf("Case #%d: %d\n",i+1,cnt);
//    }
//    return 0;
//}
//
//
//
//
//
