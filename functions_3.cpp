#include "str_easy.h"

string itc_cmp_str(string str1, string str2, int num)
{
    long long len = itc_len(str1);
    long long len2 = itc_len(str2);
    string str = "";
    long long i = 0;
    while (i < num)
    {
        str += str1[i];
        i++;
    }
    long long k = 0;
    while (k < len2)
    {
        if (i + k == len)
            return str;
        str += str2[k];
        k++;
    }
    while (i + k < len)
    {
        str += str1[i];
        i++;
    }
    return str;
}

int itc_find_str(string str1, string str2)
{
    long long len2 = itc_len(str2);
    long long len = itc_len(str1);
    long long index = -1;
    long long i = 0;
    long long i2 = 0;
    while (i < len)
    {
        if (str1[i] == str2[i2])
        {
            if (str1[i] == str2[0])
                index = i;
            i2++;
        }
        else
        {
            i2 = 0;
            index = -1;
        }
        i++;
        if (str2[i2 - 1] == str2[len2 - 1])
            return index;
    }
    return -1;
}

string itc_three_str(string str1, string str2, string str3)
{
    return "";
}

int itc_max_char_on_end(string str)
{
    return 0;
}
