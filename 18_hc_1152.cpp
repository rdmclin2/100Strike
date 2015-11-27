////
//// Created by Calvin on 15/11/26.
////
//
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<utility>
//#include<algorithm>
//#include<cstring>
//#include<set>
//
//using namespace std;
//
//int fib100[] = {1, 2, 3, 5, 8, 13, 21, 34, 55, 89};
//int a[26];
//
//bool isFib(int n) {
//    int length = sizeof(fib100) / sizeof(int);
//    for (int i = 0; i < length; i++) {
//        if (n == fib100[i]) {
//            return true;
//        }
//    }
//    return false;
//}
//
//int diffc(string str){
//
//    memset(a,0,sizeof(a));
//    for(int i = 0; i< str.size();i++){
//        a[str[i] - 'a'] = 1;
//    }
//    int cnt = 0 ;
//    for(int i = 0 ; i < 26;i++){
//        if(a[i] == 1)
//            cnt++;
//    }
//    return cnt;
//}
//
//
//int main() {
//    string str,sub;
//    set<string> s;
//    cin>>str;
//    for (int i = 0; i < str.size(); i++) {
//        for (int j = 1; i+j <= str.size(); j++) {
//            sub = str.substr(i,j);
//            if (isFib(diffc(sub))) {
//                s.insert(sub);
//            }
//        }
//    }
//    set<string>::iterator it;
//    for(it = s.begin();it!=s.end();it++)
//        cout<<*it<<endl;
//    return 0;
//}