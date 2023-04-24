//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        int del;
        if(sizeOfStack % 2 != 0)
            del = sizeOfStack/2 + 1;
        else
            del = sizeOfStack/2;
            
        int count = sizeOfStack;
        vector<int> v;
        while(count != del)
        {
            int val = s.top();
            v.push_back(val);
            s.pop();
            count--;
        }
        count--;
        s.pop();
        
        for(int i = v.size() - 1; i >= 0; i--)
            s.push(v[i]);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends