#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <climits>
#include <iomanip>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> a(n), b(m);
	multiset<int>se;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		se.insert(a[i]);
	}
	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
	}
	for (int i = 0; i < m; i++)
	{
		auto it = se.upper_bound(b[i]);
		if (it != se.begin())
		{
			it--;
			cout << *it << endl;
			se.erase(it);
		}
		else
		{
			cout << -1 << endl;
		}
	}
}
