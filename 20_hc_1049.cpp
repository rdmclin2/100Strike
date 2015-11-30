//
// Created by Calvin on 15/11/30.
//

#include<iostream>
#include<cstdio>
#include<cmath>
#include<utility>
#include<algorithm>
#include<cstring>
#include<set>
using namespace std;

#define mxn 1000
#define MOD 100007
#define LL long long
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; ++i)
#define FOR(i, a, b) for (int i = a; i < b; ++i)


typedef struct nodeStruct * Node;

struct nodeStruct{
    char val;
    Node left;
    Node right;
};

Node getTree(string pre,string mid){
    if(pre.empty() || mid.empty()) return NULL;
    Node node = (Node)malloc(sizeof(struct nodeStruct));
    node->val = pre[0];
    int size = (int)pre.length();
    if(size == 1){
        node->left = NULL;
        node->right = NULL;
        return node;
    }
    int pos = 0;
    for(int i = 0; i < size; i++){
        if(mid[i] == pre[0]){
           pos = i;
           break;
        }
    }
    node->left = getTree(pre.substr(1,pos),mid.substr(0,pos));
    node->right = getTree(pre.substr(pos+1,size-pos-1),mid.substr(pos+1,size-pos-1));
    return node;
}

string postTravel(Node node){
    if(node == NULL) {
        return "";
    }
    string res;
    res += postTravel(node->left);
    res += postTravel(node->right);
    res += node->val;
//    cout<<res<<endl;
    return res;
}
int main(){
    string pre,mid;
    cin>>pre>>mid;
    Node head = getTree(pre,mid);
    cout<<postTravel(head)<<endl;

    return 0;
}