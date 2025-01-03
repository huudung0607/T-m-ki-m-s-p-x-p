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
	cin >> n ;
	vector<int> a(n);
	set<int> se;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		se.insert(a[i]);
	}
	for (auto x : a)
	{
		auto it = se.upper_bound(x);
		if (it != se.end())
		{
			cout << *it << " ";
		}
		else
		{
			cout << "_" << " ";
		}
	}
}
