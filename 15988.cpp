#include<cstdio>
long long dp[1000001] = {0, 1, 2, 4 };
const long long mod = 1000000009;
 
long long DP(int n){
    if (n <= 0)return 0;
    if (dp[n])return dp[n];
    for (int i = 4; i <= 1000000; i++){
        dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % mod;
    }
    return dp[n];
}
 
int main(){
    long long T;
    long long n;
    scanf("%lld", &T);
    for (; T--;){
        scanf("%lld", &n);
        printf("%lld\n", DP(n));
    }
    return 0;
}
