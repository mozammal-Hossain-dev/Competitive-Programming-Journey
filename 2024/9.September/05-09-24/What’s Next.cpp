#include<bits/stdc++.h>

using namespace std;

int main()
{
    while(1)
    {
        double a,b,c;

        cin >> a >> b >> c;

        if(a==0 && b == 0 && c==0) break;

        double dif1 = b - a, dif2 = c - b;

        double div1 = b/a, div2 = c/b;

        if(dif1 == dif2)
        {
            cout << "AP " << c+dif1 << endl;
        } else {
            cout << "GP " << c*div1 << endl;
        }


    }
}
