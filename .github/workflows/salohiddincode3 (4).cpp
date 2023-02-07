#include <iostream>
using namespace std;

int main()

{
   int len;
   cout << "vvedite dlinu stroki (ot 1 do 79): ";
   cin >> len;
   while(len>0 && len<80) {
    cout << '.';
    len--;
   }
   return 0;
}
