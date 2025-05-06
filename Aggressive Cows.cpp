
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
	int num = a[0];
	int cnt = 1;
	for (int i = 1; i < n; i++)
	{
		if (a[i] - num >= mid) {
			cnt++;
			num = a[i];
		}
		if (cnt >= k) return true;
	}
	return false;
}
int main()
{
	int n, k;
	cin >> n >> k;
	vector<int >a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int left = 1;
	int right = *max_element(a.begin(), a.end()) - *min_element(a.begin(), a.end());
	int res = -1;
	sort(a.begin(), a.end());
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

