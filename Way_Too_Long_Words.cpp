#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        string sss;
        cin >> sss;
        if (sss.length() <= 10)
        {
            cout << sss << endl;
            continue;
        }
        string s2;
        char ch1 = sss[0];
        char ch2 = sss[sss.length() - 1];
        s2.append(sss, 0, 1);
        int num = sss.length() - 2;
        string numS = to_string(num);
        s2.append(numS);
        s2.append(sss, sss.length() - 1, 1);
        cout << s2 << endl;
    }
}
