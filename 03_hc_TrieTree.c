////
////  03_hc_TrieTree.c
////  Hihocoder
////
////  Created by Calvin on 15/10/21.
////  Copyright © 2015年 CalvinMeng. All rights reserved.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define TABLE_SIZE 26
//
//#define STR_SIZE 11
//
//
//typedef struct NODE{
//    char val;
//    int cnt;
//    int index;
//    struct NODE* children[TABLE_SIZE];
//}Node;
//
//Node * tree = NULL;
//
//void insert(char * str){
//   int i,j;
//   if(tree == NULL){
//       tree = (Node *)malloc(sizeof(Node));
//       tree->cnt = 0;
//       tree->index=0;
//       for(i = 0; i< TABLE_SIZE ;i++){
//           tree->children[i] = NULL;
//       }
//   }
//    Node * cur;
//    Node ** link = &tree;
//    int length = (int)strlen(str);
//    for(i = 0;i < length;i++){
//        int flag = 0;
//        cur = (*link);
//        for(j = 0; j < cur->index;j++){
//            if(str[i] == cur->children[j]->val ){
//                link = & (cur -> children[j]);
//                (*link)-> cnt ++;
//                flag = 1;
//                break;
//            }
//        }
//        if(!flag){
//            Node * node = (Node *)malloc(sizeof(Node));
//            node -> cnt = 1;
//            node -> val = str[i];
//            node -> index = 0;
//            for(j = 0; j< TABLE_SIZE ;j++){
//                node->children[j] = NULL;
//            }
//            link = &(cur -> children[cur->index]);
//            cur->index++;
//            *link= node;
//        }
//    }
//}
//
//int find(char * str){
//    int i,j;
//    Node * cur = tree;
//    int length = (int)strlen(str);
//    for(i = 0 ;i < length;i++){
//        int flag = 0;
//        for(j = 0; j < cur->index;j++) {
//            if (str[i] == cur->children[j]->val){
//                cur = cur->children[j];
//                flag = 1;
//                break;
//            }
//        }
//        if(flag == 0){
//            return 0;
//        }
//    }
//    return cur -> cnt;
//}
//
//int main(){
//    int n,m,i;
//    char * str = malloc(sizeof(char) *STR_SIZE);
//
//    while(scanf("%d\n",&n)!=EOF){
//        for(i = 0 ;i< n;++i){
//            gets(str);
//            insert(str);
////            puts(str);
//        }
//        scanf("%d\n", &m);
//        for(i = 0 ;i< m; ++i){
//            gets(str);
////            puts(str);
//            printf("%d\n",find(str));
//        }
//    }
//    return 0;
//}
