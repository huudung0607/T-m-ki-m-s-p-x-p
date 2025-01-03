#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
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
	sort(a.begin(), a.end());
	int dem = 1;
	for (int i = 1; i < n; i++)
	{
		if (a[i] - a[i - 1] <= k)
		{
			continue;
		}
		else
		{
			dem++;
		}
	}
	cout << dem << endl;
}
