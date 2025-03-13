#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	vector<vector<string>> arr(51, vector<string>());
	for (int i = 0; i < t; ++i)
	{
		string str;
		cin >> str;
		int size = str.size();
		arr[size].push_back(str);
	}

	for (int i = 0; i < 51; ++i)
	{
		sort(arr[i].begin(), arr[i].end());
		for (int j = 0; j < arr[i].size(); ++j)
		{
			if (j != 0 && arr[i][j - 1] == arr[i][j])
				continue;

			cout << arr[i][j] << endl;
		}
	}
}