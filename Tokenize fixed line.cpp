#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the string :"<<endl;
    cin>>str;
    int cnt=0;
    vector<string>vec;
    
    cout<<"'";
    for(int i=0; i<sizeof(str); i++)
    {
        if(str[i]=='=')
        {
            cnt+=2;
            cout<<"' '=' '";
        }
        else if(str[i]=='/')
        {
            cnt+=2;
            cout<<"' '/' '";
        }
        else if(str[i]=='+')
        {
            cnt+=2;
            cout<<"' '+' '";
        }
        else if(str[i]==';')
        {
            cnt+=2;
            cout<<"' ';' '";
        }
        else{
            cout<<str[i];
        }
    }
    cout<<endl<<"The number of tokens: "<<cnt<<endl;
    return 0;
}
// avg=sum/4+value;
