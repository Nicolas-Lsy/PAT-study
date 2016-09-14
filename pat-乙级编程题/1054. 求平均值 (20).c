#include <iostream>
#include <vector>
#include <string>

using namespace std;

inline bool check(string & s)
{
    string s1;
    unsigned i;
    if (s[0] == '-')
    {
        i = 1;
    }
    else
    {
        i = 0;
    }
    if (s[i] == '.') return false;
    for (; s[i] != '.'&&i<s.size(); i++)
    {
        if (s[i]<'0' || s[i]>'9')
            return false;
        else
        {
            s1 += s[i];
        }
    }
    if(i==s.size())
    { 
        if (stod(s) > 1000 || stod(s) < -1000)
        {
            return false;
        }
        else {
            return true;
        }
    }
    
    string s2;
    s2 += s[i++];
    //if (i >= s.length()) return false;
    string s3;
    int cnt = 0;
    for (; i< s.length(); i++)
    {
        if (s[i]    < '0' || s[i] > '9')
            return false;
        else {
            s3 += s[i];
            ++cnt;
            if (cnt > 2)
                return false;
        }
    }
    if (stod(s) > 1000 || stod(s) < -1000)
    {
        return false;
    }
    return true;
}


int main()
{
    int N;
    cin >> N;
    vector<string> rnum(N);
    vector<string> rese;
    vector<string> res;
    int cnt = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> rnum[i];
        if (!check(rnum[i]))
        {
            rese.push_back(rnum[i]);
        }
        else
        {
            res.push_back(rnum[i]);
            cnt++;
        }
    }
    for (unsigned i = 0; i < rese.size(); i++)
    {
        cout << "ERROR: " << rese[i] << " is not a legal number" << endl;
    }
    double sum = 0;
    for (unsigned i = 0; i < res.size(); i++)
    {
        sum += stod(res[i]);
    }
    double avg = sum / res.size();
    if (res.size() == 0)
    {
        cout << "The average of 0 numbers is Undefined" << endl;
    }
    else if (res.size()==1)
    {
        printf("The average of %d number is %.2f",res.size(),avg);
    }
    else{
        
        printf("The average of %d numbers is %.2f",res.size(),avg);
    }
    return 0;
}
