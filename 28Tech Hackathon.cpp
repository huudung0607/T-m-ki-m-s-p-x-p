
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
bool check(vector<int>a, long long n, long long h, long long mid) {
	long long ans = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % mid == 0) {
			ans += a[i] / mid;
		}
		else ans += (a[i] / mid) + 1;
	}
	return ans <= h;
}
int main()
{
	long long n, h;
	cin >> n >> h;
	vector<int>a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	long long res = -1;
	long long left = 1;
	long long right = *max_element(a.begin(), a.end());
	while (left <= right) {
		long long mid = (left + right) / 2;
		if (check(a, n, h, mid)) {
			res = mid;
			right = mid - 1;
		}
		else left = mid + 1;
	}
	cout << res;
}

