//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) 
            cin >> a[i];

        vector<int> ans = minAnd2ndMin(a, n);
        if (ans[0] == -1)
            cout << -1 << endl;
        else 
            cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<int> minAnd2ndMin(int a[], int n) {
    vector<int>ans;
    int mini = INT_MAX;
    int sec = INT_MAX;
    
    int flag = 0;
    for(int i = 0; i < n; i++){
        if(a[0] != a[i])
            flag = 1;
    }
    
    for(int i = 0; i < n; i++){
        if(a[i] < mini)
            mini = a[i];
    }
    
    for(int i = 0; i < n; i++){
        if(a[i] > mini && a[i] < sec)
            sec = a[i];
    }
    
    if(flag == 0)
        ans.push_back(-1);
    else{
        ans.push_back(mini);
        ans.push_back(sec);
    }
    
    return ans;
}