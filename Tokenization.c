// Tokenization


#include <stdio.h>
#include <ctype.h>
#include <string.h>
char *keywords[] = {
    "int", "return", "if", "else", "while", "for", "do", "break", "continue",
    "void", "char", "float", "double", "long", "switch", "case", "default",
    "struct", "sizeof", "typedef", "union", "const", "static", "enum", "extern",
    "printf", "scanf", "string"};
int isKeyword(char *str)
{
    for (int i = 0; i < sizeof(keywords) / sizeof(keywords[0]); i++)
    {
        if (strcmp(str, keywords[i]) == 0)
            return 1;
    }
    return 0;
}

int isOperator(char ch)
{
    char operators[] = "+-*/%=<>!&|^";
    for (int i = 0; i < strlen(operators); i++)
    {
        if (ch == operators[i])
            return 1;
    }
    return 0;
}

int isSeparator(char ch)
{
    char separators[] = " ,;(){}[]";
    for (int i = 0; i < strlen(separators); i++)
    {
        if (ch == separators[i])
            return 1;
    }
    return 0;
}

int isIdentifier(char *str)
{
    if (str[0] == '#' || isalpha(str[0]) || isalnum(str[0]) || str[0] == '_')
    {
        for (int i = 1; i < strlen(str); i++)
        {
            if (!isalnum(str[i]) && str[i] != '_')
                return 0;
        }
        return 1;
    }
    return 0;
}

int main()
{
    char input[100], token[100];
    int i = 0, j = 0;

    printf("Enter the input string: ");
    fgets(input, 100, stdin);

    printf("Tokens found:\n");

    while (input[i] != '\0')
    {
        if (isspace(input[i]))
        {
            i++;
            continue;
        }
        if (isOperator(input[i]))
        {
            printf("Operator: %c\n", input[i]);
            i++;
        }
        else if (isSeparator(input[i]))
        {
            printf("Separator: %c\n", input[i]);
            i++;
        }
        else if (input[i] == '#' || isalnum(input[i]) || input[i] == '_')
        {
            j = 0;
            while (input[i] == '#' || isalnum(input[i]) || input[i] == '_')
            {
                token[j++] = input[i++];
            }
            token[j] = '\0';

            if (isKeyword(token))
                printf("Keyword: %s\n", token);
            else if (isIdentifier(token))
                printf("Identifier: %s\n", token);
        }
        else
        {
            printf("Invalid token: %c\n", input[i]);
            i++;
        }
    }

    return 0;
}
