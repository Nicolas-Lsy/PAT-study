#include <iostream>  
#include <string>  
#include <sstream>  
using namespace std;  
  
  
int main()  
{  
    string sci_num;  
    cin >> sci_num;  
  
    // Parse the number into parts  
    // Decimal point position  
    size_t ppos = sci_num.find('.');  
    // 'E' position  
    size_t epos = sci_num.find('E');  
  
    // sign  
    int neg = sci_num[0] == '-' ? 1 : 0;  
    // base number(integer part)  
    string part1 = sci_num.substr(1, ppos-1);  
    // base number(float part)  
    string part2 = sci_num.substr(ppos+1, epos-ppos-1);  
    // exponent  
    string part3 = sci_num.substr(epos + 2);  
    int neg_exp = sci_num[epos + 1] == '-' ? 1 : 0;  
    stringstream ss(part3);  
    int exp;  
    ss >> exp;  
      
    string result = "";  
  
    if (!neg_exp){  
        // move decimal point to right  
        result += part1;  
        int p;  
        for (p = 0; p < exp && p < part2.size(); ++p){  
            result += part2[p];  
        }  
        if (p < exp){  
            // appnending 0s in the end   
            while (p < exp){  
                result += '0';  
                ++p;  
            }  
        }  
        else{  
            //   
            result += '.';  
            for (; p < part2.size(); ++p){  
                result += part2[p];  
            }  
        }  
    }  
    else{  
        // move decimal point to left  
        result += part2;  
        int p;  
        for (p = 0; p < exp && part1.size() - p > 0; ++p){  
            result = part1[part1.size()-p-1] + result;  
        }  
        if (p < exp){  
            // add 0s in the front  
            while (p < exp){  
                result = '0' + result;  
                ++p;  
            }  
            result = "0." + result;  
        }  
        else{  
            //  
            result = '.' + result;  
            for (; part1.size() - p > 0; ++p){  
                result = part1[part1.size() - p - 1] + result;  
            }  
        }  
    }  
    if (result[0] == '.'){  
        // avoid .123  
        result = "0" + result;  
    }  
    if (result[result.size() - 1] == '.'){  
        // avoid 123.  
        result = result.substr(0, result.size() - 1);  
    }  
    if (neg){  
        // sign  
        result = "-" + result;  
    }  
  
    cout << result << endl;  
  
    system("pause");  
    return 0;  
}  
