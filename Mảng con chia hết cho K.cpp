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
	long long n; cin >> n;
	vector<long long> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	unordered_map<long long, int> mp;
	mp[0] = 1;
	int cnt = 0;
	int sum = 0;
	long long ans = 0;
	for (long long i = 0; i < n; i++)
	{
		sum += a[i];
		sum = (sum % n + n) % n;
		if (mp.count(sum)) {
			ans += mp[sum];
		}
		mp[sum]++;
	}
	cout << ans;
}
