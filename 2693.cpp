#include <iostream>
#include <algorithm>
using namespace std;
int T,a[11];
int main() {
    cin >> T;
    while (T--)
    {
        for (int i = 1; i <= 10; i++)
            cin >> a[i];
        sort(a + 1, a + 11);
        cout << a[8] << '\n';
    }
}
