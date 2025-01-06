#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <climits>
#include <iomanip>
using namespace std;

void selectionSort(vector<int>& a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int minpos = i;
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] < a[minpos])
			{
				minpos = j;
			}
		}
		swap(a[i], a[minpos]);
		cout << "Buoc " << i + 1 << ":" << " ";
		for (auto x : a)
		{
			cout << x << " ";
		}
		cout << endl;
	}
}

int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	selectionSort(a, n);
}
