
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <climits>
#include <iomanip>
#include <string>
#include <sstream>
#include <queue>
#include <stack>
#include <unordered_map>
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
	int l = 0;
	int cnt = 0;
	unordered_map<int, int>mp;
	for (int i = 0; i < n; i++)
	{
		while (mp.count(a[i])) {
			
			mp.erase(a[l]);
			l++;
		}
		mp[a[i]]++;
		cnt = max(cnt, i - l + 1);
	}
	cout << cnt;
}

