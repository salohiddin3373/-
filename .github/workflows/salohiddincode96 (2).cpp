#include <iostream>
using namespace std;

int main()

{
    int choice;
    cout << "sravka po temam:\n\n";
    cout << "1. V VIP stole imeyutsa: \n";
    cout << "2. V ORDINARY stole imeyutsa: \n";
    cout << "3. V USUALLY USING stole imeyutsa: \n\n";

    cout << "vvedite nomer stola (1-3): ";
    cin >> choice;
    cout << "\n";
    switch(choice) {
    case 1:
        cout << "V VIP stole vse vewi do lux kacestva + bonus 2 blok kola v syurpriz.\n";
        break;
    case 2:
        cout << "V ORDINARY stole vse vexi minilux kacestva 12 stulyev, 1 stol, +1 blok kola v syurpriz.\n";
        break;
    case 3:
        cout << "V USUALLY USING stole vse veshi avarage kacchestva 6 stulev, 1 stol, surpriso1v net .\n";
        break;
    default:
        cout << "vi doljni vvesti chislo ot 1 do 3.\n";
    }
    return 0;
}
