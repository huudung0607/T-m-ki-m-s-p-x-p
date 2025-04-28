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
	int n,m; cin >> n >> m;
	vector<long long> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	long long sum = 0;
	long long l = 0;
	long long cnt = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
		while (sum > m && l <= i) {
			sum -= a[l];
			l++;
		}
		if (sum == m) cnt++;
	}
	cout << cnt;
}
