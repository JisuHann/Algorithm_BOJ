#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int n;vector<int> v;int l;int m;
int main(void){
    cin >> n; 
    for(int l=0 ; l<n ; l++){
        cin >> m;
        v.push_back(m);
    }

    int result = 0; int lev = 0;
    for (int i = n - 2; i >= 0; i--) {
		if (v[i + 1] <= v[i])
			result += v[i] - (v[i + 1] - 1);
		v[i] = min(v[i], v[i + 1] - 1);
	}

    cout << result;

    return 0;
}
