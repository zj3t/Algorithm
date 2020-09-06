#include <iostream>

using namespace std;

int main(){
    int testScore = 0;

    cin >> testScore;

    if(testScore >= 0 && testScore <= 100){
        if(testScore <= 100 && testScore >= 90){
            cout << "A" << endl;
        }
        else if(testScore <= 89 && testScore >= 80){
            cout << "B" << endl;
        }
        else if(testScore <= 79 && testScore >= 70){
            cout << "C" << endl;
        }
        else if(testScore <= 69 && testScore >= 60){
            cout << "D" <<  endl;
        }
        else{
            cout << "F" << endl;
        }
    }
    return 0;
}