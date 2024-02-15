#include <iostream>

using namespace std;

int a, b;
const double PI = 3.1416;
double r;

void Questions(){
    do {
        cout << "Type a number: ";
        cin >> a;
        if (a <= 0){
            cout << "You must type a number bigger than 0!" << endl;
        }
    } while (a <= 0);

    do{
        cout << "Type another number: ";
        cin >> b;
        if (b <= 0){
            cout << "You must type a number bigger than 0!" << endl;
        }
    } while (b <= 0);
}

void AreaCircle(){
    cout << "Type the value of the radius: ";
    cin >> r;
    cout << "The are of the circle: " << PI * (r * r) << endl;
}

int main(){
    Questions();
    cout << "Sum: " << a + b << endl;
    cout << "Difference: "<< a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    cout << "Division: "<< a / b << endl;
    cout << "Rest of Division: " << a % b << endl;
    AreaCircle();

    return 0;
}