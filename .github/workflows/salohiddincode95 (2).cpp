#include <iostream>
using namespace std;

class myclass {
  int a, b;
  public:
      void setab(int i, int j) { a = i, b = j; }
      void showab();
};
void myclass::showab()
{
    cout << "a ravno " << a << '\n';
    cout << "b ravno " << b << '\n';
}
int main()
{
    myclass ob1, ob2;

    ob1.setab(10, 20);
    ob2.setab(0, 0);

    cout << "obekt ob1 do prisivanivaniya: ";
    ob1.showab();
    cout << "obekt ob2 do prisvaivaniya: ";
    ob2.showab();

    cout << '\n';
    ob2 = ob1;
    cout << "obekt ob1 posle prisvaivaniya: ";
    ob1.showab();
    cout << "obekt ob2 posle prisvaivamiya: ";
    ob2.showab();

    return 0;
}
