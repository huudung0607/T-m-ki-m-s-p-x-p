
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
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] <= mid) {
			cnt++;
		}
		if (cnt >= k) {
			return true;
		}
	}
	return false;
}
int main()
{
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int left = *min_element(a.begin(), a.end());
	int right = *max_element(a.begin(), a.end());
	int res = -1;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (check(a, n, k, mid)) {
			res = mid;
			right = mid - 1;
		}
		else left = mid + 1;
	}
	cout << res;
}

