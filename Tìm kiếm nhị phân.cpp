#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
using namespace std;

int binarySearch(vector<int> a, int l, int r, int x)
{
	while (l <= r)
	{
		int m = (l + r) / 2;
		if (a[m] == x)
		{
			return true;
		}
		else if (a[m] < x)
		{
			l = m + 1;
		}
		else
		{
			r = m - 1;
		}
	}
	return false;
}

int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	int q;
	cin >> q;
	while (q--)
	{
		int x;
		cin >> x;
		if (binarySearch(a,0,n-1,x))
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}
