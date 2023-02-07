#include <iostream>
using namespace std;

int main()

{
    int choice;
    cout << "spravka po temam:\n\n";
    cout << "1. for\n";
    cout << "2. if\n";
    cout << "3. switch\n\n";

    cout << "vvedite nomer temi (1-3):";
    cin >> choice;
    cout << "\n";
    switch(choice) {
    case 1:
        cout << "for - eto sami universalniy sikl v c++.\n";
        break;
    case 2:
        cout << "if - eto instuksiya uslovnogo vetvleniya.\n";
        break;
    case 3:
        cout <<"switch - eto istruksiya mnogonapravlenogo vetvleniya.\n";
        break;
    default:
        cout << "vi doljni vvesti chislo ot 1 do 3.\n";
        return 0;
    }
}
