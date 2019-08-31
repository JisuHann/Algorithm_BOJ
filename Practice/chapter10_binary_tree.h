#ifndef __BinTree
#define __BinTree

#include "Member.h"

typedef struct __bnode{   //이진 검색 트리의 구조 : 데이터와 왼/오 포인터 정의
  Member data;
  struct __bnode *left;
  struct __bnode *right;
}BinNode;

BinNode *Search(BinNode *p, const Member *x);
BinNode *Add(BinNode *p, const Member *x);
int Remove(BinNode **root, const Member *x);
void PrintTree(const BinNode *p);
void FreeTree(BinNode *p);
#endif
