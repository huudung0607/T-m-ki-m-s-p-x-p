#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <set> 
#include <map>
#include <unordered_map>
using namespace std;
int main()
{
	int n, m, k;
	cin >> n >> m >> k;
	vector<int> a(n), b(m);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	int i = 0, j = 0;
	int dem = 0;
	while (i < n && j < m)
	{
		if (b[j] >= a[i] - k && b[j] <= a[i] + k)
		{
			dem++;
			i++;
			j++;
		}
		else if (b[j] < a[i] - k)
		{
			j++;
		}
		else
		{
			i++;
		}
	}
	cout << dem;
}
