#include<bits/stdc++.h>

using namespace std;

const int MAX_CHAR=256;

int maxchar(string& str)
{
    int n=str.length();
    int res=-1;
    
    int firstInd[MAX_CHAR];
    for(int i=0;i<MAX_CHAR;i++)
    {
        firstInd[i]=-1;
    }
    
    for(int i=0;i<n;i++)
    {
        int first_ind=firstInd[str[i]];
        
        if(first_ind==-1)
        {
            firstInd[str[i]]=i;
        }
        else
        {
            res=max(res,abs(i-first_ind-1));
        }
    }
    return res;
}

int main() {
    
    int t;
    string str;
    
    cin>>t;
    while(t--)
    {
        cin>>str;
        
        cout<<maxchar(str)<<endl;
    }
    
}