////
//// Created by Calvin on 15/11/26.
////
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<utility>
//#include<algorithm>
//#include <ctype.h>
//#include <cstring>
//
//using namespace std;
//
//#define MAX 200
//
//char str[MAX+1];
//char newstr[MAX + 1];
//char mastr[] = "marshtomp";
//char fstr[] =  "fjxmlhx";
//
//
//
//int main(){
//    int mLength  =(int)strlen(mastr);
//    while(fgets(str,MAX+1,stdin)!=NULL){
//        memset(newstr,0, sizeof(newstr));
//        int length = (int)strlen(str)-1;
//        int index = 0;
//        while(index < length){
//            int cnt = 1;
//            if (tolower(str[index]) == mastr[0]){
//                while(index + cnt < length && tolower(str[index+cnt]) == mastr[cnt]){
//                    cnt++;
//                }
//            }
//
//            if(cnt == mLength){
//                strcat(newstr,fstr);
//            }else{
//                strncat(newstr,str+index,(size_t)cnt);
//            }
//            index +=cnt;
//        }
//        printf("%s\n",newstr);
//    }
//    return 0;
//}
//
