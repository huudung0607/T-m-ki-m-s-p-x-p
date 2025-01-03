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
	int n;
	cin >> n;
	vector<pair<long long, long long>> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i].first >> a[i].second;
	}
	sort(a.begin(), a.end());
	long long sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = max(sum,a[i].first) + a[i].second;
	}
	cout << sum << endl;
}
