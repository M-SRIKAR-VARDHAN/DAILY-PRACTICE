//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void printNos(int n) {
    if (n == 0) return;                // Base case: stop recursion
    printNos(n - 1);                   // Recursive call for numbers less than n
    if (n == 1)                        // For the first number, don't add a space
        printf("%d", n);
    else                               // Add a space for all other numbers
        printf(" %d", n);
}
};

//{ Driver Code Starts.
/* Driver program to test printNos */
int main() {
    int T;

    // taking testcases
    cin >> T;

    while (T--) {
        int N;

        // input N
        cin >> N;
        Solution ob;
        // calling printNos() function
        ob.printNos(N);
        cout << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends