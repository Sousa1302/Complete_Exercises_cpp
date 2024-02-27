#include <iostream>

using namespace std;

void calculos(){
    int a, b;
    double r;
    const double PI = 3.1416;

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

    cout << "Sum: " << a + b << endl;
    cout << "Difference: "<< a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    cout << "Division: "<< a / b << endl;
    cout << "Rest of Division: " << a % b << endl;

    cout << "Type the value of the radius: ";
    cin >> r;
    cout << "The area of the circle: " << PI * (r * r) << endl;

}


void notas(){

    int nums[10] = {10, 5, 9, 4, 92, 52, 62, 16, 81, 44};
    float grades[5], high_comparision_num = grades[0], low_comparision_num = grades[0], high_comparision_num_2 = nums[0], low_comparision_num_2 = nums[0], Average, Average_2, sum = 0, sum_2 = 0;
    
    
    for(int g = 0 ; g < 5 ; g++){
        cout << "Type the grade for student " << g + 1 << ": ";
        cin >> grades[g];
        sum += grades[g];
        Average = sum / 5;
    }
    cout << "Average grade: " << Average << endl;

    for(int x = 0 ; x < 5 ; x++){
        if(grades[x] > high_comparision_num){
            high_comparision_num = grades[x];
        }
    }
    cout << "Highest grade: " << high_comparision_num << endl;

    for(int x = 0 ; x < 5 ; x++){
        if(grades[x] < low_comparision_num){
            low_comparision_num = grades[x];
        }
    }
    cout << "Lowest grade: " << low_comparision_num << endl;

    for(int g = 0 ; g < 10 ; g++){
        sum_2 += nums[g];
        Average_2 = sum_2 / 10;
    }
    


    for(int x = 0 ; x < 10 ; x++){
        if(nums[x] < low_comparision_num_2){
            low_comparision_num_2 = nums[x];
        }
    }


    for(int x = 0 ; x < 10 ; x++){
        if(nums[x] > high_comparision_num_2){
            high_comparision_num_2 = nums[x];
        }
    }

    cout << endl;
    cout << "Average grade: " << Average_2 << endl;
    cout << "Highest grade: " << high_comparision_num_2 << endl;
    cout << "Lowest grade: " << low_comparision_num_2 << endl;

}

void tabuada(){
    int n;
    cout << "Chose a number: ";
    cin >> n;

    for(int x = 1; x <= 10; x++){
        cout << x << " * " << n << " = " << x * n << endl;
    }
}

void menu(){
    int option;

    cout << "=======================" << endl;
    cout << "          MENU" << endl;
    cout << "=======================" << endl;
    cout << "Chose an option:\n";
    cout << "1. Calculator \n2. Grades \n3. Multiplication Table \n";
    cin >> option;

    switch (option){
        case 1:
            calculos();
            break;

        case 2:
            notas();
            break;
        
        case 3:
            tabuada();
            break;;

        default:
            cout << "You must type a number between 1-3 !\n";
            break;

    } 
}



int main(){
    
    menu();
    return 0;
}