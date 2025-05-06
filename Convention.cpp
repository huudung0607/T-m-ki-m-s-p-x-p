//https://usaco.org/index.php?page=viewproblem2&cpid=858

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
bool check(vector<int> a, int n, int m, int c, int mid) {
	int cnt = 1;
	int num = a[0];
	int xe = 1;
	for (int i = 1; i < n; i++)
	{
		if (cnt == c || a[i] - num > mid) {
			xe++;
			num = a[i];
			cnt = 1;
		}
		else cnt++;
	}
	if (xe <= m) {
		return true;
	}
	else return false;
}
int main()
{
	int n, m, c;
	cin >> n >> m >> c;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int left = 0;
	int right = *max_element(a.begin(), a.end()) - *min_element(a.begin(), a.end());
	int res = -1;
	sort(a.begin(), a.end());
	while (left <= right) {
		int mid = (left + right) / 2;
		if (check(a, n, m, c, mid)) {
			res = mid;
			right = mid - 1;
		}
		else left = mid + 1;
	}
	cout << res;
}

