
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
bool check(vector<int> a, int n, int h, int mid) {
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % mid == 0) {
			sum += a[i] / mid;
		}
		else sum += (a[i] / mid) + 1;
	}
	if (sum <= h) return true;
	else return false;
}
int main()
{
	int n, h;
	cin >> n >> h;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int left = 1;
	int right = *max_element(a.begin(), a.end());
	int res = -1;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (check(a, n, h, mid)) {
			res = mid;
			right = mid - 1;
		}
		else left = mid + 1;
	}
	cout << res;
}

