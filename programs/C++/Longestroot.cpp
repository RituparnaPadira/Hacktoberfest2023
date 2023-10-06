// C++ program to reverse a string 
// using first to last approach
// 'for' loop
#include <bits/stdc++.h>
using namespace std;

// Function to reverse a string
void reverseStr(string& str)
{
	int n = str.length();

	// Swap character starting from two
	// corners
	for (int j = 0; j < n / 2; j++)
		swap(str[j], str[n - j - 1]);
}

// Driver program
int main()
{
	string str = "geeksforgeeks";
	reverseStr(str);
	cout << str;
	return 0;
}
