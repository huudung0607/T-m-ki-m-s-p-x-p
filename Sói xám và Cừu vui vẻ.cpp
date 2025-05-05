
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
bool check(vector<long long> a, int n, int k, int mid) {
	int val = a[0];
	int cnt = 1;
	for (int i = 1; i < n; i++) {
		if (a[i] - val >= mid) {
			cnt++;
			val = a[i];
		}
	}
	if (cnt >= k) {
		return true;
	}
	else return false;
}
int main()
{
	int n, k;
	cin >> n >> k;
	vector<long long> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	int l = 1;
	int r = *max_element(a.begin(), a.end()) - *min_element(a.begin(), a.end());
	int res = -1;
	while (l <= r) {
		int m = (l + r) / 2;
		if (check(a, n, k, m)) {
			res = m;
			l = m + 1;
		}
		else r = m - 1;
	}
	cout << res;
}

