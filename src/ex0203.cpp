#include <iostream>

using namespace std;

int main(){
    double x, y;
    char c;
    do {
        cout << "Enter operation (+, - *, /) or q to terminate:";
        cin >> c;
        if (c == 'q') break;

        cout << "Enter x and y: ";
        switch(c){
            case '+': cout << x + y << endl; break;
            case '-': cout << x - y << endl; break;
            case '*': cout << x * y << endl; break;
            case '/': cout << x / y << endl; break;
        }
    } while (c != 'q');

    return 0;
}