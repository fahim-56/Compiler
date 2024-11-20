// Regular Expression Check

#include <bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        int x;
        cout<<"Enter 1 to Exit"<<endl;
        cin>>x;
        if(x==1)
        {
            break;
        }
        else
        {
            string input;

            cout << "Enter a string to check: ";
            cin >> input;
            regex pattern("a*b+");
            if (regex_match(input, pattern))
            {
                cout << "The string matches" << endl;
            }
            else
            {
                cout << "The string does not matches." << endl;
            }
        }

    }
    return 0;
}

