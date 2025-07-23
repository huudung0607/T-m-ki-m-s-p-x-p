
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
	int cnt = 1;
	for (int i = 0; i < n; i++) {
		if (a[i] > mid) return false;
		if (sum + a[i] > mid) {
			cnt++;
			sum = 0;
		}
		sum += a[i];
	}
	if (cnt <= k) return true;
	else return false;
}
int main()
{
	int n, k; cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int left = 1;
	int right = accumulate(a.begin(), a.end(), 0);
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

