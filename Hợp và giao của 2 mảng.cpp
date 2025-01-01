#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> a(n), b(m);
	map<int, int> mp;
	set<int> res;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		res.insert(a[i]);
	}
	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
		res.insert(b[i]);
	}
	for (auto x : a)
	{
		mp[x] = 1;
	}
	for (auto x : b)
	{
		if (mp[x] == 1)
		{
			mp[x] = 2;
		}
	}
	for (auto x : b)
	{
		if (mp[x] == 2)
		{
			cout << x << " ";
			mp[x] = 0;
		}
	}
	cout << endl;
	for (auto x : res)
	{
		cout << x << " ";
	}
}
