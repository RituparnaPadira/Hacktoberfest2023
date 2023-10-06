// C++ program to implement 
// the above approach 

#include <bits/stdc++.h> 
using namespace std; 

// Function to traverse the string and 
// print the characters of the string 
void TraverseString(string &str, int N) 
{ 
	// Traverse the string 
	for (int k = 0; k < N; k++) { 

		// Print current character 
		cout<< str[k]<< " "; 
	} 
	
} 

// Driver Code 
int main() 
{ 
	string str = "GeeksforGeeks"; 
	
	// Stores length of the string 
	int N = str.length(); 

	TraverseString(str, N); 
} 
