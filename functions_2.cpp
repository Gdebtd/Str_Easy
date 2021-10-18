#include "str_easy.h"

string itc_even_place(string str)
{
    string _str = "";
    long long len = itc_len(str);
    if (len <= 1)
        return "-1";
    long long i = 0;
    while (i < len)
    {
        if ((i + 1) % 2 == 0)
            _str += str[i];
        i++;
    }
    return _str;
}

double itc_percent_lower_uppercase(string str)
{
    double perc = 0;
    long long len = itc_len(str);
    long long i = 0;
    double countLower = 0;
    double countUpper = 0;
    while (i < len)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            countLower++;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            countUpper++;
        i++;
    }
    perc = countUpper / countLower;
    return perc;
}

string itc_reverse_str(string str)
{
    string _str;
    long long len = itc_len(str) - 1;
    while (len >= 0)
    {
        _str += str[len];
        len--;
    }
    return _str;
}

string itc_slice_str(string str, int _start, int _end)
{
    long long len = itc_len(str) - 1;
    if (_end > len)
        _end = len;
    if (_start > _end)
        return str;
    string _str = "";
    long long i = _start;
    while (i <= _end)
    {
        _str += str[i];
        i++;
    }
    return _str;
}

bool itc_equal_reverse(string str)
{
    return str == itc_reverse_str(str);
}
