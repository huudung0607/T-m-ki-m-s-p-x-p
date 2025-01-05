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
	int n, x;
	cin >> n >> x;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	int i = 0, j = n - 1;
	int cnt = 0;
	while (i <= j)
	{
		if (a[i] + a[j] <=x)
		{
			i++;
			j--;
			cnt++;
		}
		else
		{
			j--;
			cnt++;
		}
	}
	cout << cnt;
}
