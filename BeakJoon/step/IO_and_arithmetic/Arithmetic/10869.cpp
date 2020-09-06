#include <iostream>

using namespace std;

int main(){
    int A,B = 0;
    int result = 0;

    cin >> A >> B;

    if(A >= 1 && B <= 10000){
        result = A+B;
        cout << result << endl;
        result = A-B;
        cout << result << endl;
        result = A*B;
        cout << result << endl;
        result = A/B;
        cout << result << endl;
        result = A%B;
        cout << result << endl;
    }
}
