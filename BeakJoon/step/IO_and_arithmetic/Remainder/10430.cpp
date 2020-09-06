#include <iostream>

using namespace std;

int main(){
    int A,B,C = 0;
    int result = 0;

    cin >> A >> B >> C;

    if(A >= 2 && B >= 2&& C <= 10000){
        result = (A+B)%C;
        cout << result << endl;
        result = (A%C + B%C)%C;
        cout << result << endl;
        result = (A*B)%C;
        cout << result << endl;
        result = (A%C * B%C)%C;
        cout << result << endl;
    }
}
