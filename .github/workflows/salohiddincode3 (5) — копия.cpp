#include <iostream>
using namespace std;

void total(int x);
int main()

{
    cout <<"vichisleniya summ chisel ot 1 do 5.\n";
    total(5);
    cout << "\n vichisleniya summi chisel ot 1 do 6.\n";
    total(6);

    return 0;
}
void total(int x)
{
    int sum=0; // inizializiruem peremennuy sum.
    int i, count;
    for(i=1; i<=x; i++){
        sum = sum + i;
        for(count=0; count<10; count++) cout <<'.';
        cout << "promejutochnaya summa ravna " << sum << '\n';
    }




}
