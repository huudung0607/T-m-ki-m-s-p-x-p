#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <set> 
#include <map>
using namespace std;

bool sotang(int n)
{
	int last = n % 10;
	n /= 10;
	while (n)
	{
		int next = n % 10;
		if (next > last)
		{
			return false;
		}
		last = next;
		n /= 10;
	}
	return true;
}
bool cmp(pair<int, int> a, pair<int, int> b)
{
	if (a.second == b.second)
	{
		return a < b;
	}
	return a.second > b.second;
}
int main()
{
	int n;
	map<int, int> mp;
	while (cin >> n)
	{
		if (sotang(n))
		{
			mp[n]++;
		}
	}
	vector<pair<int, int>> res(mp.begin(), mp.end());
	sort(res.begin(), res.end(), cmp);
	for (auto x : res)
	{
		cout << x.first << " " << x.second << endl;
	}
}
