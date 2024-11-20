//First Pos (Just in 1 line)

#include<bits/stdc++.h>
#include<string.h>
using namespace std;

bool isCapital(char x)
{
    if(x>64 && x<91)
        return true;
    else
        return false;
}
int main()
{
    cout<<"Enter the string:"<<endl;
    string str;
    getline(cin, str);
    cout<<"First of the string:"<<endl;
    bool suru = true;
    for(int i=2; i<str.size(); i++)
    {
        if(suru)
        {
            if(isCapital(str[i]))
            {
                suru = false;
            }
            else if((str[i]!='/'))
            {
                cout<<str[i]<<" ";
                suru=false;
            }
        }
        if(str[i]=='/')
        {
            suru = true;
        }
    }
    return 0;
}
/*
E=Tab/dT/caE/EdT/$
F=(E)/Ta/bE/$
*/
