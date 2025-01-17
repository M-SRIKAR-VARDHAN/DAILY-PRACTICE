//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int sumOfDivisors(int n) {
         int result = 0;
        for (int i = 1; i <= n; i++) {
            result += i * (n / i); // Add i * (number of multiples of i)
        }
        return result;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        int ans = ob.sumOfDivisors(N);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends