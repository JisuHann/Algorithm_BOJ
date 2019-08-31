#include <stdio.h>
#include <stdlib.h>
#include "Member.h"
#include "chapter10_binary_tree.h"

// 노드 동적 할당
static BinNode *AllocBinNode(void){
  return calloc(1, sizeof(BinNode));
}

//노드 멤버 값 설정
static void SetBinNode(BinNode *n, const Member *x, const BinNode *left, const BinNode *right){
  n ->data = x;
  n ->left = left;
  n ->right = right;
}

BinNode *Search(BinNode *p, const Member *x){
  int cond;
  if(p == NULL)
    return NULL;    //검색 실패하는 경우
  else if ((cond = MemberNoCmp(x, &p->data)) == 0)
    return p;
  else if(cond < 0)
    Search(p->left, x);
  else
    Search(p->right, x);
}

BinNode *Add(BinNode *p, const Member *x){
  int cond;
  if(p == NULL) { //비어있는 이진검색 트리에 노드멤버값 설정해주기
    p = AllocBinNode();
    SetBinNode(p,x,NULL,NULL);
  }else if((cond = MemberNocmp(x, &p->data))==0){ //이미 있는 경우
    printf("오류 | %d는 이미 등록되어 있습니다.\n", x->no);
  }else if(cond < 0){
    p->left = Add(p->left, x);
  }else{
    p->right = Add(p->right,x);
  }
  return p;
}

int Remove(BinNode **root, const Member *x){
  BinNode *next *temp;
  BinNode **left;
  BinNode **p = root;

  while(1){
    int cond;
    if(*p == NULL){
      printf("오류 | %d는 등록되어 있지 않습니다.\n",x->no);
      return -1;
    }else if((cond = MemberNoCmp(x, &(*p)->data))==0)
      break;
    else if(cond <0)
      p = &((*p)->left);
    else
      p = &((*p)->right);
  }

  if((*p)->left == NULL)
    next = (*p)->right;
  else
    left = &((*p)->left);
    while((*left)->right != NULL)
      left = &(*left)->right;
    next = *left;
    *left = (*left)->left;
    next ->left = (*p)->left;
    next ->right = (*p)->right;
  tmp = *p;
  *p = next;
  free(temp);

  return 0;
}

void PrintTree(const BinNode *p){
  if(p!=NULL)
    PrintTree(p->left);
    PrintLnMember(&p->data);
    PrintTree(p->right);
}

void FreeTree(BinNode *p){
  if(p!= NULL)
    FreeTree(p->left);
    FreeTree(p->right);
    free(p);
}

void PrintTreeReverse(const BinNode *p){
  if(p!= NULL)
    PrintTree(p->right);
    PrintLnMember(&p->data);
    PrintTree(p->left);
}
