#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <set> 
#include <map>
using namespace std;

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
	int min_dis = 10000000;
	for (int i = 1; i < n; i++)
	{
		min_dis = min(min_dis, abs(a[i] - a[i - 1]));
	}
	int dem = 0;
	for (int i = 1; i < n; i++)
	{
		if (abs(a[i] - a[i - 1]) == min_dis)
		{
			dem++;
		}
	}
	cout << min_dis << " " << dem;
}
