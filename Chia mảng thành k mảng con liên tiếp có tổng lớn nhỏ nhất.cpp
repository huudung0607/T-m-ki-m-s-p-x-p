
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
bool check(vector<long long> a, int n, int k, long long mid) {
	long long sum = 0;
	long long cnt = 1;
	for (int i = 0; i < n; i++) {
		if (sum + a[i] > mid) {
			cnt++;
			sum = a[i];
		}
		else sum += a[i];
	}
	return cnt <= k;
}
int main()
{
	int n, k;
	cin >> n >> k;
	vector<long long> a(n);
	long long maxval = -1;
	long long sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		maxval = max(maxval, a[i]);
		sum += a[i];
	}
	while (maxval < sum) {
		long long mid = (maxval + sum) / 2;
		if (check(a, n, k, mid)) {
			sum = mid;
		}
		else maxval = mid + 1;
	}
	cout << maxval;
}

