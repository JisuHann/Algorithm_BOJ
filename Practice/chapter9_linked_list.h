#ifdef __LinkedList
#define __LinkedList

#include "Member.h"

typedef struct __node{      //define Node
  Member data;
  struct __node *next;
}Node;

typedef struct{             //define List(Linked List that has many nodes)
  Node *head;
  Node *crnt;
}List;

void Initialize(List *list);  //연결리스트 초기화
Node *search(List *list, const Member *x, int compare(const Member *x, const Member *y));
void InsertFront(List *list, const Member *x);
void InsertRear(List *list, const Member *x);
void RemoveFront(List *list);
void RemoveRear(List *list);
void RemoveCurrent(List *list);
void Clear(List *list); //모든 노드 삭제
void PrintCurrent(const List *list);
void PrintLnCurrent(const List *list);
void Print(const List *list);
void Terminate(List *list);
#endif
