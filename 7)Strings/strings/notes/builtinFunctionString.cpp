#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void strPrinting(string &s)
{
    // cout<<&s<<"="<<&(s[0])<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i] << " ";
    }
    cout << endl;
}
int main()
{
    // string s ="aditya singh";

    string s;
    getline(cin, s);

    // even though "\0"-exists but its nature in length is countable
    //  reverse length sub_string
    strPrinting(s);
    cout<< s.length();
    cout<<s.size();
    int v=s.length()/2;//6
    reverse(s.begin(),s.end()-v); //0 6// builtin function game
    strPrinting(s);
    int n = 2456452;
    string nStr = to_string(n);
    cout << nStr.length() << endl;
    strPrinting(nStr);
    nStr.push_back('h');
    nStr.push_back('z');
    strPrinting(nStr);
    nStr.pop_back();
    strPrinting(nStr);
    s = s + " " + nStr; // a d i t y a   s i n g h   2 4 5 6 4 5 2 h
    strPrinting(s);
    cout << nStr.substr() << endl;
    cout << nStr.substr(0, nStr.length() - 5) << endl;
}