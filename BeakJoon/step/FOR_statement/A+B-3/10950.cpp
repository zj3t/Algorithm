#include <iostream>

using namespace std;

int main(){
    int testCase = 0;
    int A, B = 0;

    cin >> testCase;

    for(int i = 0; i < testCase; i++){
        cin >> A >> B;
        if (A,B > 0 && A,B < 10)
            cout << A+B << endl;
    }
    return 0;
}