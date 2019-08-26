// 문자열String은 string 자체로 존재하는 것이 아닌, char형 배열이다.
// 문자열은 Null 문자와 포함하여 문자열로 인식(문자열의 길이 얘기할 때 주의해야 함)

#include <stdio.h>
#include <string.h>


int main(void){
  //문자열 받아오기
  char st[128];
  scanf("%s", st);

  //포인터 사용
  char *pt = "12345";
  printf("포인터 pt는 \"%s\"를 가리킵니다", pt);

  return 0;
}

//두 포인터 값을 교환하기
void swap_ptr(char **x,char **y){
  char *tmp = *r;
  *x = *y;
  *y = tmp;
}

//문자열의 길이 구하기 : strlen 함수
int str_len(const char *s){
  int len = 0;
  while(s[len])
    len++;
  return len;
}

//문자열에서 문자 검색하기 : strchr(앞쪽부터), strrchr(뒤쪽부터 검색) : int형으로 받는다.
int str_len(const char *s, int c){
  int i = 0;
  c = (char)c;
  while(s[i] != c){
    if(s[i] == '\0')
      return -1;
      i++;
  }
  return 1;
}

//문자열 대소관계 비교하기 : strcmp(같으면 0 아니면 딴 값), strncmp(몇 번째까지 비교할 거임?)
int str_cmp(const char *s1, const char *s2){
  while(*s1 == *s2){
    if(*s1 == '\0')
      return 0;
    s1++;
    s2++;
  }
  return (unsigned char)*s1 - (unsigned char) *s2;
}


//연습 문제
int main(void){
  //1번
  char s[10];
  s[0]='A';
  s[1]='B';
  s[2]='C';
  s[3]='D';
  s[4]='X';
  printf(s);

  //4번
  printf(strlen(s));
  return 0;
}

//연습 문제 3번
void swap_str(char *x, char *y){
  char *z;
  z = x;
  x = y;
  y = z;
}

//연습 문제 6번
int *str_rchr(const char *s, int c){
  int i = strlen(s)-1;
  c = (char)c;
  while(s[i] != c)
    if(i ===0)
      return -1;
    i--;
  return 0;
}

//연습 문제 7번
int str_ncmp(const char *s1, const char *s2, size_t n){
  n = (int)n;
  for(int  i = 0;i<n;i++){
    while(*s1 == *s2){
      if(*s1 == '\0')
        return 0;
        s1++;
        s2++;
    }
  }
  return (unsigned char)*s1 - (unsigned char) *s2;
}
