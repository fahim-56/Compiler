//One line code decoding (expression, input, output, function)

#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    cout<<"Enter one line code :"<<endl;
    string str;
    getline(cin, str);
    char A;
    string result(str.size(),' ');
    for(int i=0; i < str.size(); i++)
    {
        if(str[i]=='=')
        {
            A= str[i+1];
            for(int j = i; j<str.size(); j++)
            {
                if(str[j]== '+')
                {
                    cout<<"Value of " << str[j+1]<<" is adding with value of "<<str[i+1]<<" and storing result to "<<result<<endl;
                }
                else if(str[j]== '-')
                {
                    cout<<"Value of " << str[j+1]<<" is subtracted from value of "<<str[i+1]<<" and storing result to "<<result<<endl;
                }
                else if(str[j]== '*')
                {
                    cout<<"Value of " << str[j+1]<<" is multiplying with value of "<<str[i+1]<<" and storing result to "<<result<<endl;
                }
                else if(str[j]== '/')
                {
                    cout<<"Value of " << str[i+1] <<" is deviding by value of "<<str[j+1] <<" and storing result to "<<result<<endl;
                }
            }
            return 0;
        }
        result[i]=str[i];

    }

    string input="cin>",output="cout";

    bool scan=true,print=true;

    for(int i=0; i < 4; i++)
    {
        if(str[i] != input[i])
        {
            scan = false;
        }
        if(str[i] != output[i])
        {
            print = false;
        }

    }
    if(scan )
    {
        cout<<"Standard input function taking input."<<endl;
    }
    else  if(print )
    {
        cout<<"Standard function printing output."<<endl;
    }
    else
    {
        cout<<"User define function."<<endl;
    }

    return 0;
}
/*
Result=A+B
Result=A-B
Result=A*B
Result=A/B
Result=4-2
Result=5+2
Result=3/2

cin>>x;
cout<<x;

test_result(int x)
*/

