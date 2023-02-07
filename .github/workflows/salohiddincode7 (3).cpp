#include <iostream>
#include <cstdlib>
using namespace std;

void drill();
int count;
int num_right;
int main()

{
    cout << "skolko prakticheski uprajneniy: ";
    cin >> count;
    num_right = 0;
    do {
        drill(); count--;
      }while(count);
      cout << "vi dali " << num_right<< " pravilni otvetov.\n";
      return 0;


}

void drill()
{
    int count; /* eta peremenaya count - lokalnaya i nikak ne svyazna s odnoimennoy globalnoy.*/
    int a, b, ans;
    // generiruym dva chisla mejdu 0 i 99.
    a = rand() % 100;
    b = rand() % 100;
    // polzovatel poluchayt tri popitki dat pravilniy otvet.
    for(count=0; count<3; count++) {
        cout << "skolko budet " << a << " + " << b << "? ";
        cin >> ans;
        if(ans==a+b) {
            cout << "pravilno\n";
            num_right++;

            return;
        }
    }
    cout << "vi ispolzovali vse svoi popitki.\n";
    cout << "otvet raven " << a+b << '\n';
}
