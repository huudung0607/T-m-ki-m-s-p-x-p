#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, s;
	cin >> n >> s;
	vector<pair<int, int>> v(n);
	for (int i = 0; i < n || i < s; i++)
	{
		cin >> v[i].first >> v[i].second;
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++)
	{
		if (v[i].first >= s)
		{
			cout << "NO" << endl;
			return 0;
		}
		s += v[i].second;
	}
	cout << "YES" << endl;
}
