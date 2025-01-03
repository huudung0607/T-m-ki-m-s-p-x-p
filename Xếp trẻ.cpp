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
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	int i = 0, j = n - 1;
	int dem = 0;
	while (i <= j)
	{
		if (a[i] + a[j] <= k)
		{
			i++;
		}
		j--;
		dem++;
	}
	cout << dem << endl;
}
