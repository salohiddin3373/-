#include <iostream>
#include <cstdlib>
using namespace std;

int main()

{
    int i;
    long j;
    double k;
    i = atoi ("100");
    j = atol("10000");
    k = atof("-0.123");
    cout << i << ' ' << j << ' ' << k;
    cout << ' \n';

    return 0;

}
