#include <iostream>

using namespace std;

int main()
{
    double y[1000], e;
    int i = 1;
    y[0] = 0;
    y[1] = 0.5;
    cout << "Input e:\n";
    cin >> e;
    while (y[i] - y[i - 1] >= e)
    {
        i++;
        y[i] = (y[i - 1] + 1) / (y[i - 1] + 2);
    }
    cout << "First correct element is y[" << i << "];\n y[" << i << "] - y[" << i-1 << "] = " << y[i]-y[i-1];
}