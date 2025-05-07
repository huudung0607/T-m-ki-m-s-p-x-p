//https://leetcode.com/problems/sqrtx/
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

int main()
{
	int n;
	cin >> n;
	int l = 0, r = n;
	int res = -1;
	while (l <= r) {
		int mid = (l + r) / 2;
		if (mid * mid < n) {
			l = mid + 1;
		}
		else if (mid * mid > n) {
			r = mid - 1;
		}
		else cout << mid;
	}
	cout << r;
}

