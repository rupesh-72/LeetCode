//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
// Tutorial - https://youtu.be/MW4lJ8Y0xXk?si=pM_QjbmuFK75XpaM
class Solution{
public:
	int search(string pat, string txt) {
	    int k = pat.length();
	    map<char,int> pat_mp;
	    map<char,int> txt_mp;
	    
	    for(char ch = 'a'; ch <= 'z'; ch++){
	        pat_mp[ch] = 0;
	        txt_mp[ch] = 0;
	    }
	    
	    for(int i = 0; i < pat.length(); i++){
	        pat_mp[pat[i]]++;
	    }
	    
	    int i = 0, j = 0,count = 0;
	    while(j < txt.length()){
	        txt_mp[txt[j]]++;
	        if(j-i+1 < k)
	            j++;
	        else if(j-i+1 == k){
	            if(txt_mp == pat_mp)
	                count++;
	            txt_mp[txt[i]]--;
	            i++,j++;
	        }
	    }
	    return count;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends