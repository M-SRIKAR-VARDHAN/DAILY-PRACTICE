//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
int print2largest(vector<int> &arr) {
    int a = INT_MIN; 
    int b = INT_MIN;
    int length = arr.size(); 
    for (int i = 0; i < length; i++) { 
        if (a < arr[i]) { 
            b = a; 
            a = arr[i]; 
        }else if(arr[i]>b&&arr[i]!=a){
            b=arr[i];
        }
    }
    if (b == INT_MIN) {
        return -1; // Indicate no second largest element exists
    }
    return b; 
}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.print2largest(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends