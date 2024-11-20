// Arithmetic Expression Validity Checking


#include <bits/stdc++.h>
using namespace std;
bool isOperator(char c)
{
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '=' || c == '%';
}

int main()
{
    string str;
    cout << "Enter an expression: ";
    getline(cin, str);

    bool flag = true;
    if (str[0] == '*' || str[0] == '/' || str[0] == '=' || str[0] == '%')
    {
        flag = false;
        cout << "1" << endl;
    }
    else if (str[0] == '+')
    {
        if (!(str[1] == '+') && !isalnum(str[1]) && !(str[1] == '='))
        {
            flag = false;
            cout << "2" << endl;
        }
    }
    else if (str[0] == '-')
    {
        if (!(str[1] == '-') && !isalnum(str[1]) && !(str[1] == '='))
        {
            flag = false;
            cout << "3" << endl;
        }
    }
    int l = str.size() - 1;
    if (!isalnum(str[l]) && !(str[l] == '+') && !(str[l] == '-'))
    {
        flag = false;
        cout << "4" << endl;
    }
    if (str[l] == '*' || str[l] == '/' || str[l] == '=' || str[l] == '%')
    {
        flag = false;
        cout << "1" << endl;
    }
    if (str[l] == '+')
    {
        if (!(str[l - 1] == '+'))
        {
            flag = false;
            cout << "5" << endl;
        }
    }
    else if (str[l] == '-')
    {
        if (!(str[l - 1] == '-'))
        {
            flag = false;
            cout << "6" << endl;
        }
    }

    for (size_t i = 1; i < l - 1; i++)
    {
        if (isspace(str[i]))
        {
            i++;
            continue;
        }
        if (str[i] == '*' || str[i] == '/' || str[i] == '%')
        {
            if (!isalnum(str[i - 1]) && !isalnum(str[i + 1]))
            {
                flag = false;
                cout << "7" << endl;
                break;
            }
        }
        else if (str[i] == '=')
        {
            if (!isalnum(str[i - 1]) && !isalnum(str[i + 1]) && !(str[i - 1] == '*') && !(str[i - 1] == '/'))
            {
                flag = false;
                cout << "8" << endl;

                break;
            }
        }
    }
    if (l >= 2)
    {
        for (size_t i = 2; i < l - 2; i++)
        {
            if (str[i] == '+' || str[i] == '-')
            {
                if (!isalnum(str[i - 1]) && !isalnum(str[i + 1]))
                {
                    flag = false;
                    cout << "7" << endl;
                    break;
                }
            }
        }
    }
    for (char c : str)
    {
        if (isspace(c))
        {
            continue;
        }
        if (!isalnum(c) && !isOperator(c))
        {
            flag = false;
            cout << "9" << endl;
            break;
        }
    }
    if (flag)
    {
        cout << "The expression is valid.\n";
    }
    else
    {
        cout << "The expression is invalid.\n";
    }

    return 0;
}
