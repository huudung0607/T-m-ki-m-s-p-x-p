#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	map<int, int> mp;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		mp[a[i]]++;
	}
	int max_num = -1;
	int maxfreq = 0;
	for (auto x : mp)
	{
		if (x.second > maxfreq || x.second == maxfreq && x.first < max_num)
		{
			max_num = x.first;
			maxfreq = x.second;
		}
	}
	cout << max_num << " " << maxfreq;
}
