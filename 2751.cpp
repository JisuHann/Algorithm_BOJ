#include <iostream>
#include <vector>
using namespace std;
vector<int> nums;

void mergeSort(int start, int mid, int end) {
	vector<int> temp;
	
	int md = mid + 1, st = start;

	while (start <= mid && md <= end) 
		nums[start] > nums[md] ? temp.push_back(nums[md++]) : temp.push_back(nums[start++]);

	while (start <= mid)
		temp.push_back(nums[start++]);
	while (md <= end)
		temp.push_back(nums[md++]);

	for (int i = st; i <= end; i++)
		nums[i] = temp[i-st];
}

void mergeSortSplit(int start, int end) {	
	if (start < end) {
		int mid = (start + end) / 2;

		mergeSortSplit(start, mid);
		mergeSortSplit(mid+1, end);
		mergeSort(start, mid, end);
	}
}

int main(void) {
	int n;

	scanf("%d", &n);
	nums.resize(n);
	
	for (int i = 0; i < n; i++)
		scanf("%d", &nums[i]);

	mergeSortSplit(0, n-1);
	
	for (vector<int>::iterator i = nums.begin(); i < nums.end(); i++)
		printf("%d\n", *i);

	return 0;
}
