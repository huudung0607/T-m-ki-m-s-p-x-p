
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
bool check(vector<long long> a, int n, int k, double mid) {
	long long cnt = 0;
	for (int i = 0; i < n; i++)
	{
		cnt += (long long)(a[i] / mid);
	}
	return cnt >= k;
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
	double left = 0.0, right = *max_element(a.begin(), a.end());
	for (int i = 0; i < 100; i++) {
		double mid = (left + right) / 2.0;
		if (check(a, n, k, mid)) {
			left = mid;
		}
		else {
			right = mid;
		}
	}
	cout << fixed << setprecision(6) << left << endl;
}

