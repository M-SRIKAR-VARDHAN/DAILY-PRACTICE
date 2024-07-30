//{ Driver Code Starts
// Initial Template for C++

// {Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int dataTypeSize(string str) {
        // your code here
        if (str=="Character"){
            char a;
            return sizeof(a);
        }
         else if (str=="Integer"){
            int a;
            return sizeof(a);
        }
        else if (str=="Long"){
            long int a;
            return sizeof(a);
        } else if (str=="Float"){
            float a;
            return sizeof(a);
        }else if (str=="Double"){
            double a;
            return sizeof(a);
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.dataTypeSize(str);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends