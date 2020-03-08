#include <iostream>

using namespace std;

int main(){
    double A,B = 0.0;
    double result = 0.0;

    cout.precision(12);
    cin >> A >> B;

    result = A/B;

    if(A > 0 && B <10)
        cout << result << endl;
}
