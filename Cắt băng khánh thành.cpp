
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
bool check(vector<long long> a, long long n, long long k, long long mid) {
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		cnt += a[i] / mid;
	}
	if (cnt >= k) return true;
	else return false;
}
int main()
{
	long long n, k; cin >> n >> k;
	vector<long long> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	long long left = 1;
	long long right = *max_element(a.begin(), a.end());
	long long res = -1;
	while (left <= right) {
		long long mid = (left + right) / 2;
		if (check(a, n, k, mid)) {
			res = mid;
			left = mid + 1;
		}
		else right = mid - 1;
	}
	if (res == -1) cout << 0;
	else cout << res;
}

