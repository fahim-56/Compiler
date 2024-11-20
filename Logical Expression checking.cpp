//Logical Expression checking
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a logical expression :"<<endl;
    getline(cin, s);
    int n =s.size();
    int valid=1;
    for(int i=0; i<n; i++)
    {

        if(s[i]=='=' )
        {
            if(s[i-1]!=s[i+2])
            {
                valid=0;
            }
            break;
        }

        if(s[i]=='<')
        {
            if(s[i+1]=='=')
            {
                if(s[i-1]>s[i+2])
                {
                    valid=0;
                    break;
                }
            }

            if(s[i-1]>=s[i+1])
            {
                valid=0;
                break;
            }
            break;
        }
        if(s[i]=='>')
        {
            if(s[i+1]=='=')
            {
                if(s[i-1]<s[i+2])
                {
                    valid=0;
                    break;
                }
                break;
            }

            if(s[i-1]<=s[i+1])
            {
                valid=0;
                break;
            }
            break;
        }
    }
    if(valid==1)
    {
        cout<<"Valid"<<endl;
    }
    else
    {

        cout<<"Not valid..."<<endl;
    }

    return 0;
}

