#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    int div = 0b111100;
    int rem = 0b10001;
    int q = 0b0;
    cout << "Inital Q: " << bitset<8>(q) << endl;
    cout << "Inital D: " << bitset<8>(div) << endl;
    cout << "Inital R: " << bitset<8>(rem) << endl;
    cout << "________________________" << endl;
    while (div != 0)
    {
        int temp = rem;
        rem = rem - div;
        if (rem < 0)
        {
            rem = temp & 0b01111111;
            q = (q << 1);
        }
        else
        {
            q = (q << 1) | 1;
        }
        div = div >> 1;
        cout << "Q: " << bitset<8>(q) << endl;
        cout << "D: " << bitset<8>(div) << endl;
        cout << "R: " << bitset<8>(rem) << endl;
        cout << "________________________" << endl;
    }
    cout << q << endl;
    cout << rem << endl;
    return 0;
}
