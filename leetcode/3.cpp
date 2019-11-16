#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
#include<string>
using namespace std;

class Solution {
public:
	int lengthOfLongestSubstring(string s)
	{
		int left = 0, right = 0;
		int max_count = 0;
		for (int i = 0; i < s.length(); i++)
		{
			for (int j = left; j < right; j++)
			{
				if (s[i] == s[j])
				{
					max_count = max(right - left, max_count);
					left = j + 1;
					break;
				}
			}
			right++;

		}
		max_count = max(right - left, max_count);
		return max_count;
	}
};


int main()
{
	string s = "abcabcbb";
	Solution a;
	cout << a.lengthOfLongestSubstring(s) << endl;

	system("pause");
	return 0;
}