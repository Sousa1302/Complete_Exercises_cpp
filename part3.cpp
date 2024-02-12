#include <iostream>

using namespace std;

void Tabuada(){
    int n;
    cout << "Chose a number: ";
    cin >> n;

    for(int x = 1; x <= 10; x++){
        cout << x << " * " << n << " = " << x * n << endl;
    }
}

int main(){
    Tabuada();
    return 0;
}