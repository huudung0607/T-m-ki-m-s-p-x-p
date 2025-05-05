
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
bool check(vector<long long>a, long long n, long long k, long long m) {
	long long val = 0;
	long long cnt = 0;
	for (long long i = 0; i < n; i++)
	{
		val += a[i];
		if (val >= m) {
			cnt++;
			val = 0;
		}
	}
	if (cnt >= k + 1) {
		return true;
	}
	else return false;
}
int main()
{
	long long n, k;
	cin >> n >> k;
	vector<long long> a(n);
	long long sum = 0;
	for (long long i = 0; i < n; i++)
	{
		cin >> a[i]; sum += a[i];
	}
	long long l = 0;
	long long r = sum;
	long long res = 0;
	while (l <= r) {
		long long m = (l + r) / 2;
		if (check(a, n, k, m)) {
			res = m;
			l = m + 1;
		}
		else r = m - 1;
	}
	cout << res;
}

