
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
bool check(vector<long long> a, int n) {
	for (int i = 0; i < n - 1; i++) {
		if (a[i] > a[i + 1]) {
			return false;
		}
	}
	return true;
}
int main()
{
	int n;
	cin >> n;
	vector<long long> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int l = 0, r = n - 1;
	while (l >= 0 && l < n - 1 && a[l] < a[l + 1]) {
		l++;
	}
	while (r > 0 && r <= n && a[r] > a[r - 1]) {
		r--;
	}
	if (l != n - 1) {
		reverse(a.begin() + l, a.begin() + r + 1);
		if (check(a, n)) {
			cout << "28tech";
		}
		else cout << "29tech";
	}
	else cout << "28tech";
}

