#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>

using namespace std;
const int size = 100;
struct inv_type {
  char item[40];
  double cost;
  double retail;
  int on_hand;
  int lead_time;
 } invtry[size];
 void enter(), int_list(), display();
 void update(), input(int i);

 int menu();

 int main()
 {
     char choise;
     int_list();
     for (;;) {
        choise = menu();
        switch(choise) {
        case 'e': enter();
       break;
       case 'd' : display();
       break;
       case 'u': update();
       break;
       case ' q': return 0;
      }
     }
 }
 void init_list()
 {
     int t;
     for(t=0; t<size; t++) *invtry[t].item = '\0';
 }
 int menu()
 {
     char ch;
     cout << '\n';
     do{
     cout << "(e)nter\n";
     cout << "(d)ispaly\n";
     cout << " (u) pdate\n";
     cout << " (0) uit\n\n";
     cout << "viberite komandu: ";
     cin >> ch;
     }while(! strchr("eduq", tolower(ch)));
     return tolower(ch);
 }
 void enter()
 {
     int i;
     for(i=0; i<size; i++)
        if(! invtry[i].item) break;
     if(i==size) {
        cout << "spisok polon. \n";
        return;
     }
     input(i);
 }
 void input(int i)
 {
     cout << "tovar";
     cin >> invtry[i].item;
     cout << "stoimost: ";
     cin >> invtry[i]. cost;
     cout << "roznichnaya sena: ";
     cin >> invtry[i].retail;
     cout << "v nalichnoy ";
     cin >> invtry[i].on_hand;
     cout << "vremy do popolneniya zapasov (v dnyax): ";
     cin >> invtry[i].lead_time;
 }
 void update()
 {
     int i;
     char name[80];
     cout << "vvedite naimenovaniya tovar: ";
     cin >> name;
     for(i=0; i<size; i++)
     if(! *invtry[i].item) break;
     if(i==size) {
        cout << "tovar ne nayden.\n";
        return;
     }
     cout << "vvedite novuy informatsiya.\n";
     input (i);
 }
 void display()
 {
     int t;
     for(t=0; t<size; t++) {
        if(*invtry[t].item) {
            cout << invtry[t].item << '\n';
            cout << "stoimost: $" << invtry[t].cost;
            cout << "\nb roznitsu: $";
            cout << invtry[t].retail << '\n';
        }
     }
 }

