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
	cin >> n;
	vector<pair<int, int>> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i].first >> a[i].second;
	}
	sort(a.begin(), a.end());
	long long sum = a[0].first + a[0].second;
	for (int i = 1; i < n; i++)
	{
		if (a[i].first <= sum)
		{
			sum = sum + a[i].second;
		}
		else
		{
			sum = a[i].first + a[i].second;
		}
	}
	cout << sum << endl;
}
