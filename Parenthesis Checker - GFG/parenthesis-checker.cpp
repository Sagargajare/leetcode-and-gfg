// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char> st;
        map<char,char> mp;
        mp.insert({'{','}'});
        mp.insert({'(',')'});
        mp.insert({'[',']'});
        for(int i = 0;i<x.size();i++){
            if(!st.empty() && mp[st.top()] == x[i]){
                st.pop();                
            }else{
                st.push(x[i]);
            }
        }
        if(st.empty()){
           return true; 
        }
        return false;
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends