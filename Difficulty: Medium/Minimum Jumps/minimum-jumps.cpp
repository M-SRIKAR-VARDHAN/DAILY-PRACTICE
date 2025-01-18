//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution {
  public:
    int minJumps(vector<int>& arr) {
           int n = arr.size();
    if (n <= 1) return 0;           // Already at the last element
    if (arr[0] == 0) return -1;     // Can't move forward

    int jumps = 1;                  // At least one jump needed
    int maxReach = arr[0];          // Farthest point we can reach
    int steps = arr[0];             // Steps we can take in the current jump range

    for (int i = 1; i < n; i++) {
        // If we've reached the last element
        if (i == n - 1) return jumps;

        // Update the farthest point reachable
        maxReach = max(maxReach, i + arr[i]);
        steps--;

        // If no more steps left
        if (steps == 0) {
            jumps++;                 // Increment jump count

            // If the current index is beyond maxReach, we can't move forward
            if (i >= maxReach) return -1;

            // Reinitialize steps for the new jump range
            steps = maxReach - i;
        }
    }
    return -1;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, i, j;
        vector<int> arr;
        string ip;
        int number;
        getline(cin, ip);
        stringstream ss(ip);

        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.minJumps(arr) << endl << "~\n";
    }
    return 0;
}

// } Driver Code Ends