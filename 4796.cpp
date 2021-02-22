#include <iostream>
using namespace std;
 
int main() {
    int a = 1;
    while (1) {
        int L, P, V;
        cin >> L >> P >> V;
        if (!L && !P && !V) { break; }
        int option = (V%P) > L ? L : V%P;
        int result = (V / P)*L + option;
        cout << "Case " << a++ << ": " << result << '\n';
    }
    return 0;
}
