#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,t;
    string s;
    cin>>n>>t;
    cin>>s;
    while(t>=1)
    {
    for(i=0; s[i]!='\0'; i++)
    {
        if(t>=1)
           {
               if(s[i]=='B' && s[i+1]=='G')
                {swap(s[i],s[i+1]);
                i++;
                }
           }

        if(t==0)
            break;
    }
    t--;
    }
    cout<<s;
}
