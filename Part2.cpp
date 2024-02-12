#include <iostream>

using namespace std;

float grades[5], Average;
int nums[10] = {10, 5, 9, 4, 92, 52, 62, 16, 81, 44};

void Read_Grades(){
    float sum = 0;

    for(int g = 0 ; g < 5 ; g++){
        cout << "Type the grade for student " << g + 1 << ": ";
        cin >> grades[g];
        sum += grades[g];
    }
    Average = sum / 5;
    cout << "Average grade: " << Average << endl;
}

void HighestGrade(float array[5]){
    float comparision_num = array[0];

    for(int x = 0 ; x < 5 ; x++){
        if(array[x] > comparision_num){
            comparision_num = array[x];
        }
    }
    cout << "Highest grade: " << comparision_num << endl;
}

void LowestGrade(float array[5]){
    float comparision_num = array[0];

    for(int x = 0 ; x < 5 ; x++){
        if(array[x] < comparision_num){
            comparision_num = array[x];
        }
    }
    cout << "Lowest grade: " << comparision_num << endl;
}

void ReadHighLow(int array[10]){
    float sum = 0;
    float high_comparision_num = array[0];
    float low_comparision_num = array[0];

    for(int g = 0 ; g < 10 ; g++){
        sum += nums[g];
    }
    Average = sum / 10;


    for(int x = 0 ; x < 10 ; x++){
        if(array[x] < low_comparision_num){
            low_comparision_num = array[x];
        }
    }


    for(int x = 0 ; x < 10 ; x++){
        if(array[x] > high_comparision_num){
            high_comparision_num = array[x];
        }
    }

    cout << endl;
    cout << "Average grade: " << Average << endl;
    cout << "Highest grade: " << high_comparision_num << endl;
    cout << "Lowest grade: " << low_comparision_num << endl;
}

int main(){
    Read_Grades();
    HighestGrade(grades);
    LowestGrade(grades);
    ReadHighLow(nums);
}