//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
       vector<int> digits;
       int a=n;
       int b=0;
       while (n > 0) {
        int digit = n % 10;          // Get the last digit
        digits.push_back(digit);          // Store it in the vector
        n /= 10;                     // Remove the last digit
    }
    
      for (int i = 0; i < digits.size(); i++) {
        if (digits[i] != 0 && a % digits[i] == 0) {
            b++;
        }
    }

    return b;
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
        cout << ob.evenlyDivides(N) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends