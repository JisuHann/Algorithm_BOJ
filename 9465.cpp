//동적 계획법, 개인적으로 어려웠던 문제
#include <cstdio>
using namespace std;

int get_max(int a, int b) { return a > b ? a : b; }

int main() {

    int T, t, n, i, j;
    char temp;
    int dp[2][100002] = { 0, };

    scanf("%d", &T);

    for (t = 0; t < T; t++) {
        scanf("%d", &n);
        for (i = 0; i < 2; i++) for (j = 2; j < n+2; j++) scanf("%d", &dp[i][j]);

        for (j = 2; j < n+2; j++) {
            for (i = 0; i < 2; i++) {
                if (i == 1) dp[i][j] += get_max(dp[i-1][j-1], dp[i-1][j-2]);
                else dp[i][j] += get_max(dp[i+1][j-1], dp[i+1][j-2]);
            }
        }
        printf("%d\n", get_max(dp[0][n+1], dp[1][n+1]));
    }

    return 0;
}
