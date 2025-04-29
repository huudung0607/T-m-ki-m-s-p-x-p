
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
bool check(long long n,int x, int y, long long mid) {
	int cntx = mid / x, cnty = mid / y;
	return cntx + cnty >= n;
}
int main()
{
	long long n;int x, y;
	cin >> n >> x >> y;
	long long left = 0;
	long long right = min(x, y) * n;
	long long first = min(x, y);
	long long res = -1;
	while (left <= right) {
		long long mid = (left + right) / 2;
		if (check(n - 1, x, y, mid)) {
			res = mid;
			right = mid - 1;
		}
		else left = mid + 1;
	}
	cout << res + first;
}

