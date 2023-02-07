#include <iostream>
#include <cstdlib>
using namespace std;

int main()

{
    int magic; // magicheskovo chislo
    int guess; // variant polzovatelya
    magic = rand(); // poluchaym sluchayno chislo.
    cout << "vvedite svoy variant magicheskovo chisla: ";
    cin >> guess;
    if(guess == magic) cout << "** pravilno **";

    return 0;
}
