#include "str_easy.h"

string itc_cmp_str(string str1, string str2, int num)
{
    if (str2 == "")
        return str1;
    if (num < 0)
	return "-1";
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
    i;
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
	if (i2 > 0)
	{
	    if (str2[i2 - 1] == str2[len2 - 1])
		return index;
	}
    }
    return -1;
}

string itc_three_str(string str1, string str2, string str3)
{
    long long len = itc_len(str1);
    long long len2 = itc_len(str2);
    long long num = itc_find_str(str1, str2);
    if (num == -1)
	return str1;
    string _str = "";
    long long i = 0;
    while (i < num)
    {
	_str += str1[i];
	i++;
    }
    long long k = 0;
    while (k < len2)
    {
	_str += str3[k];
	k++;
    }
    i -= 1;
    i += k;
    while (i < len)
    {
	_str += str1[i];
	i++;
    }
    return _str;
}

int itc_max_char_on_end(string str)
{
    long long len = itc_len(str);
    long long i = 0;
    long long maxi = 0;
    long long cnt = 0;
    while (i < len)
    {
	if (str[i] >= '0' && str[i] <= '9')
	{
	    if (cnt == 0)
	    {
		cnt++;
	    }
	    else
	    {
		if (i > 0)
		{
		    if (str[i] - str[i - 1] == 1)
			cnt++;
		    else
		    {
			if (cnt > maxi)
			    maxi = cnt;
			cnt = 0;
		    }
		}
	    }
    }
    else
    {
	if (cnt > maxi)
	    maxi = cnt;
	cnt = 0;
    }
    i++;
    }
    if (cnt > maxi)
	maxi = cnt;
    return maxi;
}
