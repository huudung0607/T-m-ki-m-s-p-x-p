/*Given that cake consists of N chunks, whose individual sweetness is represented by the sweetness[] array, the task is to cut the cake into K + 1 pieces 
  to maximize the minimum sweetness.
Examples:

Input: N  = 6, K = 2, sweetness[] = {6, 3, 2, 8, 7, 5}
Output: 9
Explanation: Divide the cake into [6, 3], [2, 8], [7, 5] with sweetness levels 9, 10, and 12 respectively.


Input: N  = 7, K = 3, sweetness[] = {1, 2, 4, 7, 3, 6, 9}
Output: 7
Explanation: Divide the cake into [1, 2, 4], [7], [3, 6], [9]  with sweetness levels 7, 7, 9, and 9 respectively.*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <climits>
#include <iomanip>
#include <string>
#include <sstream>
#include <queue>
#include <stack>
#include <unordered_map>
using namespace std;
bool check(vector<int> a, int n, int k, int mid) {
	int sum = 0;
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
		if (sum >= mid) {
			cnt++;
			sum = 0;
		}
		
	}
	if (cnt >= k + 1) {
		return true;
	}
	else return false;
}
int main()
{
	int n, k;
	cin >> n >> k;
	vector<int>a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int left = 0;
	int right = accumulate(a.begin(), a.end(), 0);
	int res = -1;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (check(a, n, k, mid)) {
			res = mid;
			left = mid + 1;
		}
		else right = mid - 1;
	}
	cout << res;
}

