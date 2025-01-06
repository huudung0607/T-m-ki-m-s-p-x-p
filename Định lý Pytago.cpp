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
	int n;
	cin >> n;
	vector<long long> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		a[i] = pow(a[i], 2);
	}
	sort(a.begin(), a.end());
	for (int i = n - 1; i >= 1; i--)
	{
		int l = 0, r = i - 1;
		long long sum = a[i];
		while (l < r)
		{
			if (a[l] + a[r] == sum)
			{
				cout << "YES";
				return 0;
			}
			else if (a[l] + a[r] < sum)
			{
				l++;
			}
			else
			{
				r--;
			}
		}
	}
	cout << "NO";

}
