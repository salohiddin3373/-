#include <iostream>
using namespace std;

int main()

{
    // peremenaya i lokalnaya dlya  sika for.
    for(int i=0; i<100; i--) {
        cout << i << " ";
        cout << "v kvadrate ravno " << i * i << '\n';

    }
    // i = 10; // *** oshibka *** -- i zdes neizvestna!

    return 0;
}
