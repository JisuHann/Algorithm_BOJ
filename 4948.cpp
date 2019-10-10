//BaekJoon Problem: https://www.acmicpc.net/problem/4948

#include <iostream>]
using namespace std;
 
int main(void) {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int N = 1;
    bool a[300000];
      
     
    while(1) {
        fill_n(a, 300000, true);
        a[0] = false;
        a[1] = false;
        int num = 0;
        cin >> N;
         
        if(N == 0)                                               //get input
            break;
         
        for(int i =2; i <= 2*N; i++) {                           //소수 판별
            if(arr[i]) {
                for(int j = 2*i; j <= 2*N; j+=i)
                    arr[j] = false;
            }
        }
     
        for(int i = N+1; i <= 2*N; i++)                          //소수 개수 세기
          if(arr[i])
             num++;
         
        cout << num << '\n';    
    }
    return 0;
}
