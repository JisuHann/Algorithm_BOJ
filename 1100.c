//Baekjoon Problem: https://www.acmicpc.net/problem/1100

#include <stdio.h>

int main() {
  char arr[8][8];
	int i, j, k, l, cnt=0;

	for(i = 0; i < 8; i++)
		gets(arr[i]);
    
	for(i=0; i<8; i+=2)
		for(j=0; j<8; j+=2)
			if(arr[i][j] == 'F')
				cnt++;

	for(k=1; k<8; k+=2)
		for(l = 1; l<8; l+=2)
			if(arr[k][l] == 'F')
				cnt++;

	printf("%d\n", cnt);

	return 0;

}


