#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <climits>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	map<int, int> mp;
	int l = INT_MAX;
	int r = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		mp[a[i]] = 1;
		l = min(l, a[i]);
		r = max(r, a[i]);
	}
	int dem = 0;
	for (int i = l; i <= r; i++)
	{
		if (mp[i] != 1)
		{
			dem++;
		}
	}
	cout << dem << endl;
}
