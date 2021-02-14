#include <iostream>
 
using namespace std;
#define MAX 8
void dfs(int _n, int _m, int _lists[], int cnt) {
    if (cnt == _m) {
        for (int i = 0; i < _m; i++) {cout << _lists[i] << " ";}
        cout << "\n";
        return;
    }
 
    for (int i = 1; i <= _n; i++) {
        _lists[cnt] = i;
        dfs(_n, _m, _lists, cnt + 1);
    }
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n, m;
    int lists[MAX] = { 0, };
    cin >> n >> m;
    dfs(n, m, lists, 0);
    return 0;
}
