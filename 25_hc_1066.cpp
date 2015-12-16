////
//// Created by Calvin on 15/12/15.
////
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<utility>
//#include<algorithm>
//#include<cstring>
//#include<set>
//#include<queue>
//#include<list>
//#include<map>
//using namespace std;
//
//#define mxn 1000
//#define MOD 100007
//#define LL long long
//#define MP make_pair
//#define REP(i, a, b) for (int i = a; i <= b; ++i)
//#define FOR(i, a, b) for (int i = a; i < b; ++i)
//
//
//map<string,string> mapUnion;
//map<string,int> mapCount;
//
//string find(string n1){
//    if(mapUnion.find(n1) == mapUnion.end()){
//        mapUnion[n1] = n1;
//        mapCount[n1] = 1;
//        return n1;
//    }
//    while(mapUnion[n1] != n1){
//        n1 = mapUnion[n1];
//    }
//    return n1;
//}
//
//void u(string n1,string n2){
//    if(mapUnion.find(n1) == mapUnion.end()){
//        mapUnion[n1] = n1;
//        mapCount[n1] = 1;
//    }
//    if(mapUnion.find(n2) == mapUnion.end()){
//        mapUnion[n2] = n2;
//        mapCount[n2] = 1;
//    }
//    string root1 = find(n1);
//    string root2 = find(n2);
//    if(root1 == root2) return ;
//
//    if(mapCount[root1] < mapCount[root2]){ mapUnion[root1] =root2; mapCount[root2] += mapCount[root1];}
//    else {  mapUnion[root2] =root1; mapCount[root1] += mapCount[root2]; }
//}
//
//
//int main(){
//    int N,ope;
//    string name1,name2;
//    scanf("%d", &N);
//    while(N--){
//        cin>> ope >> name1 >> name2;
//        if(ope == 0 ){
//            u(name1,name2);
//        }else{
//            if(find(name1) == find(name2)){
//                cout<<"yes"<<endl;
//            }else{
//                cout<<"no"<<endl;
//            }
//        }
//    }
//    return 0;
//}
