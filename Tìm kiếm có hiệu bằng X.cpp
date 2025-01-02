#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <set> 
#include <map>
using namespace std;

bool binarySearch(vector<int> a, int l, int r, int x)
{
	while (l <= r)
	{
		int m = (l + r) / 2;
		if (a[m] == x)
		{
			return true;
		}
		else if (a[m] > x)
		{
			r = m - 1;
		}
		else
		{
			l = m + 1;
		}
	}
	return false;
}

int main()
{
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	for (int i = 0; i < n; i++)
	{
		if (binarySearch(a,i + 1,n - 1,a[i] + k ))
		{
			cout << 1 << endl;
			return 0;
		}
	}
	cout << -1 << endl;
}
