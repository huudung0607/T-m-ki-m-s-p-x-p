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
	vector<int>a(n);
	unordered_map<int, int> mp;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		mp[a[i]] = i;
	}
	int cnt = 1;
	vector<int> b = a;
	sort(b.begin(), b.end());
	for (int i = 0; i < n - 1; i++) {
		if (mp[b[i]] > mp[b[i + 1]]) {
			cnt++;
		}
	}
	cout << cnt;
}
