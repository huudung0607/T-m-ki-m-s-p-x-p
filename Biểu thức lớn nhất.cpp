#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a.begin() + 1, a.end(), greater<int>());
	long long ans = a[0];
	for (int i = 1; i < n; i++)
	{
		if (i <= k)
		{
			ans += a[i];
		}
		else
		{
			ans -= a[i];
		}
	}
	cout << ans << endl;
}
