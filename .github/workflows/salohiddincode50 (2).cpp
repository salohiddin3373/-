#include <iostream>
using namespace std;

int main()

{
    int j, k;
    int &i = j;

    j = 10;
    cout << j << " " << i;
    k = 121;
    i = k;
    cout << "\n" << j;
    return 0;
}
