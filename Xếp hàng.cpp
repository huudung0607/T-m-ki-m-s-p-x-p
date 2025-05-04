
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
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	vector<int> a(v.begin(), v.end());
	sort(a.begin(), a.end());
	unordered_map<int, int> mp;
	for (int i = 0; i < n; i++)
	{
		mp[v[i]] = i;
	}
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] != v[i]) {
			int index = mp[a[i]];
			swap(v[i], v[index]);
			mp[v[i]] = i;
			mp[v[index]] = index;
			cnt++;
		}
	}
	cout << cnt;
}

