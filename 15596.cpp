//baekjoon problem: https://www.acmicpc.net/problem/15596

//C language
long long sum(int *a, int n) {
	long long ans = 0;
    for(int i =0;i<n;i++){
        ans += *(a+i);
    }
	return ans;
}

// C++ language
#include <vector>
long long sum(std::vector<int> &a)
{
    long long ret = 0;
    for (int i = 0; i < a.size(); i++)
    {
        ret += *(a+i);
    }
    return ret;
}
