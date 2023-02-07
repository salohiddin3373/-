#include <iostream>
using namespace std;

int main()

{
    int n;
    cout << "vvedite kolichestva fudbalisti: ";
    cin >> n;
    int numbers[n];
    cout << "vvediye nomer fudbalisti:" << endl;
    for(int i=0; i<n; i++) {
        cin >> numbers[i];
    }
    double distance[n];
    cout << "vvedite distance fudbalisti: " << endl;
    for(int i=0; i<n; i++) {
        cin >> distance[i];
    }
    int winnerlndex = 0, loserlndex = 0;
    double maxdistance = distance[0],mindistance = distance[0];
    for(int i=1; i<n; i++) {
        if(distance[i] > maxdistance) {
            maxdistance = distance[i];
            winnerlndex = i;
       } else if(distance[i] < mindistance) {
         mindistance = distance[i];
         loserlndex = i;
    }}
    cout << "winner numbers is: " << numbers[winnerlndex] <<endl;
    cout << "loser number is: " << numbers[loserlndex] << endl;
    return 0;}

