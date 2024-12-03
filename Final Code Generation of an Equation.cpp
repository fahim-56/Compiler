//Final Code Generation of an Equation (C++ to Assembly)
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    cout<<"Enter one line Equation:"<<endl;
    string str;
    getline(cin, str);
    vector<string> sign;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]=='+')
        {
            sign.push_back("ADD");
        }
        else if(str[i]=='-')
        {
            sign.push_back("SUB");
        }
        else if(str[i]=='*')
        {
            sign.push_back("MUL");
        }
        else if(str[i]=='/')
        {
            sign.push_back("DIV");
        }

    }

    cout<<"MOV id3,R2"<<endl<<sign[0]<<" 50,R2"<<endl<<"MOV id2,R1"<<endl<<sign[1]<<" R2,R1"<<endl<<"MOV R1,id1"<<endl;
    return 0;
}
/*

Sum = oldSum + Rate * 50
Sum = oldSum + Rate / 50
Sum = oldSum + Rate + 50
Sum = oldSum + Rate - 50

Sum = oldSum - Rate * 50
Sum = oldSum - Rate / 50
Sum = oldSum - Rate + 50
Sum = oldSum - Rate - 50

Sum = oldSum * Rate * 50
Sum = oldSum * Rate / 50
Sum = oldSum * Rate + 50
Sum = oldSum * Rate - 50

Sum = oldSum / Rate * 50
Sum = oldSum / Rate / 50
Sum = oldSum / Rate + 50
Sum = oldSum / Rate - 50


*/

