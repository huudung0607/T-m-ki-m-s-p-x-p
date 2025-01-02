#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <set> 
#include <map>
using namespace std;
long long tohop(long long n)
{
	return n * (n -1)/2;
}
int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	map<int, int> mp;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		mp[a[i]]++;
	}
	long long sum = 0;
	for (auto x : mp)
	{
		sum += tohop(x.second);
	}
	cout << sum;
}
