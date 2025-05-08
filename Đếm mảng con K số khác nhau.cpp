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
	unordered_map<long long,int> mp;
	long long l = 0;
	long long cnt = 0;
	bool found = false;
	for (int r = 0; r < n; r++)
	{
		mp[a[r]]++;
		while (mp.size() > k) {
			mp[a[l]]--;
			if (mp[a[l]] == 0) {
				mp.erase(a[l]);
			}
			l++;
		}
		if (mp.size() <= k) {
			found = true;
		}
		if (found) {
			cnt += (r - l + 1);
		}
	}
	cout << cnt;

}
