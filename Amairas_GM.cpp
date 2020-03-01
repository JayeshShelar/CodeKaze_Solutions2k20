#include<bits/stdc++.h>
using namespace std;
int main() {

	long temp1,temp2;
    long y,b;
    long q,n;
    char ch;
    int flag=0;
    
    map<long,long> mp;
    
    cin>>n>>q;
    
    while(q--)
    {
        cin>>ch;
        
        if(ch=='M')
        {
            cin>>temp1;
            cin>>temp2;
            
            mp.insert({temp2,temp1});
        }
        else
        {
            cin>>y>>b;
            flag=0;
            
            for(auto itr=mp.begin();itr!=mp.end();++itr)
            {
                if(itr->second <= y && itr->first >= b)
                {
                    cout<<itr->first<<endl;
                    flag=1;
                    break;
                }
                
            }
            if(flag==0)
            {
                cout<<"-1"<<endl;
            }
        }
    }
}
