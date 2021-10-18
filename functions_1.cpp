#include "str_easy.h"

string itc_hello_str(string name)
{
    return "Hello, " + name;
}

long long itc_len(string str)
{
    long long i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

void itc_print_copy_str(string str, int number)
{
    int i = 0;
    while (i < number)
    {
        cout << str << endl;
        i++;
    }
}

void itc_first_end_three(string str)
{
    long long i = itc_len(str);
    if (i > 5)
    {
        cout << str[0] << str[1] << str[2] << str[i - 1 - 2] << str[i - 1 - 1] << str[i - 1] << endl;
    }
    else
    {
        long long k = 0;
        while (k < i)
        {
            cout << str[0] << endl;
            k++;
        }
    }
}

int itc_count_char_in_str(char ch, string str)
{
    int cnt = 0;
    long long len = itc_len(str);
    long long i = 0;
    while (i < len)
    {
        if (str[i] == ch)
            cnt++;
        i++;
    }
    return cnt;
}
