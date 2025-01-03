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
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a.begin(), a.end(), greater<int>());
	int docung = a[0], dem = 1;
	for (int i = 1; i <n; i++)
	{
		if (docung > 0)
		{
			dem++;
			docung--;
			docung = min(docung, a[i]);
		}
	}
	cout << dem << endl;
}
