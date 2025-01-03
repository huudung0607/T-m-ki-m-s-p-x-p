#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <climits>
using namespace std;

map<int, int> mp;
bool cmp1(int a, int b)
{
	if (mp[a] != mp[b])
	{
		return mp[a] > mp[b];
	}
	else
	{
		return a < b;
	}
}
bool cmp2(int a, int b)
{
	return mp[a] > mp[b];
}

int main()
{
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		b[i] = a[i];
		mp[a[i]]++;
	}
	sort(a.begin(), a.end(), cmp1);
	for (auto x : a)
	{
		cout << x << " ";
	}
	cout << endl;
	stable_sort(b.begin(), b.end(), cmp2);
	for (auto x : b)
	{
		if (mp[x] > 0)
		{
			while (mp[x] > 0)
			{
				mp[x]--;
				cout << x << " ";
			}
		}
	}
}
