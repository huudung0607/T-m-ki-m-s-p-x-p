#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <set> 
#include <unordered_map>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	unordered_map<int, int> mp;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		mp[a[i]]++;
		if (mp[a[i]] >= 2)
		{
			cout << a[i] << " ";
			return 0;
		}
	}
	cout << -1 << endl;
}
