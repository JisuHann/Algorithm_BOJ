#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int n;vector<int> v;int l;int m;
int main(void){
    cin >> n; n*=2; 
    for(int l=0 ; l<n ; l++){
        cin >> m;
        v.push_back(m);
    }

    sort(v.begin(), v.end());
    int result = 999999;
    for(int k=0;k<= n/2;k++){
        if (result > (v[k] + v[n-1-k])){
            result = v[k] + v[n-1-k];
        }
    }

    cout << result;

    return 0;
}
