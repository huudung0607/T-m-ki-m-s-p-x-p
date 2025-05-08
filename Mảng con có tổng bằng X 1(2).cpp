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
	long long n, k; cin >> n >> k;
	vector<long long> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	long long tong = 0;
	unordered_map<long long, int> mp;
	mp[0] = -1;
	long long ans = 0;
	for (int i = 0; i < n; i++)
	{
		tong += a[i];
		if (mp.count(tong - k)) {
			ans++;

		}
		mp[tong] = i;
	}
	cout << ans;
}
