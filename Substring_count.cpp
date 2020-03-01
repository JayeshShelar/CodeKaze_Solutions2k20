#include<bits/stdc++.h>
using namespace std;

int count(string s,char c,int k)
{
    int leftcnt=0;
    int rightcnt=0;
    
    int left=0,right=0;
    
    int flag=0;
    
    int result=0,len=s.length();
    
    while(s[left]!=c && left<len)
    {
        left++;
        leftcnt++;
    }
    
    right=left+1;
    while(flag!=(k-1)&&(right-1)<len)
    {
        if(s[right]==c)
        {
            flag++;
        }
        right++;
    }
    
    while(left<len && (right-1)<len)
    {
        while(s[left]!=c && left<len)
        {
            left++;
            leftcnt++;
        }
        
        while(right<len && s[right]!=c)
        {
            if(s[right]==c)
            {
                flag++;
            }
            right++;
            rightcnt++;
        }
        
        result=result+(leftcnt+1)*(rightcnt+1);
        flag=k-1;
        
        leftcnt=0;
        rightcnt=0;
        
        left++;
        right++;
    }
    return result;
}

int main() {

	int t,p;
    char c;
    string s;
    
    cin>>t;
    while(t--)
    {
        cin>>p;
        cin>>c>>s;
        
        cout<<count(s,c,p)<<endl;
    }
}
