#include <stdio.h>
#include <stdlib.h>
#include "IntSet.h"
// s->은 s 집합(struct) 안에 있는 내용물을 확인하겠다는 의미임.


Int Initialize(IntSet *s, int max){ #초기화
  s -> num = 0;
  if((s->set = calloc(max, sizeof(int)))==NULL){
    s->max = 0;
    return -1;
  }
  s ->max = max;
  return 0;
}

Int IsMember(const IntSet *s, int n){ #집합에 포함 여부 확인 있으면 0 없으면 -1
  int i;
  for(i = 0;i<s->num;i++)
    if(s ->set[i] == n)
      return 0;
  return -1;
}

Int Add(IntSet *s, int n){  #원소 추가
  if(s->num < s->max && IsMember(s,n)==-1)
    s->set[s->num++] = n;
}

void Remove(IntSet *s, int n){  #원소 삭제
  int idx;
  if((idx == IsMember(s,n)) != -1){
    s->set[idx] == s->set[--s->num];
  }
}

int Capacity(const IntSet *s){ #최대 개수
  return s->max;
}

int Size(IntSet *s){  #원소 개수
  return s->num;
}

void Assign(IntSet *s1, IntSet *s2){ # 다른 집합에 집합을 대입
  int i;
  int n = (s1 ->max < s2->max)? s1->max:s2->max;
  for(i=0;i<n;i++){
    s1->set[i] = s2->set[i];
  }
  s1->num = n;
}

int Equal(const IntSet *s1, const IntSet *s2){
  int i,j;
  if(Size(s1) != Size(s2)){
    return 0;
  }
  for(i=0;i<s1->num;i++){
    for(j=0;j<s2->num;j++){
      if(s1->set[i]==s2->set[j]){
        break;
      }
    }
    if(j == s2->num)
      return 0;
  }
  return 1;
}

IntSet *Union(IntSet *s1, const IntSet *s2, const IntSet *s3){
  int i;
  Assign(s1,s2);
  for(i =0;i<s3->num;i++)
    Add(s1, s3->set[i]);
  return s1;
}

IntSet *Intersection(IntSet *s1, const IntSet *s2, const IntSet *s3){
  int i,j;
  s1->num =0;
  for(i=0;i<s2->num;i++)
    for(j=0;j<s3->num;j++)
      Add(s1, s2->set[i]);
  return s1;
}

IntSet *Difference(IntSet *s1, const IntSet *s2, const IntSet *s3){
  int i,j;
  s1->num =0;
  for(i=0;i<s2->num;i++)
    for(j=0;j<s3->num;j++)
      if(s2->set[i]==s3->set[j])
        break;
    if(j==s3->num)
      Add(s1,s2->set[i]);
  return s1;
}

void Terminate(IntSet *s){
  if(s->set != NULL)
    free(s->set);
    s->max = s->num = 0;
}

#연습 문제 1번
int IsFull(const IntSet *s){
  if(s->num == s->max)
    return 1;
  else
    return 0;
}

void Clear (IntSet *s){
  s->num = 0;
}

IntSet *symmetricDifference(IntSet *s1, const IntSet *s2, const IntSet *s3){
  int i,j;
  s1->num =0;
  for(i=0;i<s2->num;i++)
    for(j=0;j<s3->num;j++)
      if(s2->set[i]==s3->set[j])
        break;
    if(j==s3->num)
      Add(s1,s2->set[i]);

  for(j=0;j<s3->num;j++)
    for(i=0;i<s2->num;i++)
      if(s2->set[i]==s3->set[j])
        break;
    if(i==s2->num)
          Add(s1,s3->set[j]);
  return s1;
}

IntSet *ToUnion(IntSet *s1, const IntSet *s2){
  int i,j;
  for(i=0;i<s2->num;i++){
    if(IsMember(s1, s2->set[i])==-1)
      if(s1->num == s1->max)
        s1->max = s1->max +1;
      Add(s1, s2->set[i]);
  }
  return s1;
}

IntSet *ToInterSection(IntSet *s1, const IntSet *s2){
  int i;
  for(i=0;i<s1->num;i++){
    if(IsMember(s2, s1->set[i])==-1)
      Remove(s1, s1->set[i]);
  }
}

IntSet *ToDifference(IntSet *s1, const IntSet *s2){
  int i;
  for(i=0;i<s1->num;i++){
    if(IsMember(s2, s1->set[i])==0)
      Remove(s1, s1->set[i]);
  }
  return s1;
}

int IsSubset(const IntSet *s1, const IntSet *s2){
  if(s1->num > s2->num)
    return 0;
  int i,j;
  for(i = 0;i<s1->num;i++){
    if(IsMember(s2, s1->set[i])== 0)
      j += 1;
  }
  if(j == s1->num){
    return 1;
  }else{
    return 0;
  }
}

int IsProperSubset(const IntSet *s1, const IntSet *s2){
  if(IsSubset(s1, s2)==1){
    if(s1->num == s2->num){
      return 0;
    }else{
      return 1;
    }
  }else{
    return 0;
  }
}
