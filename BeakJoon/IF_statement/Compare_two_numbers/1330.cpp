#include <iostream>

using namespace std;

int main(){
    int A,B = 0;

    cin >> A >> B;

    if(A >= -10000 && B <= 10000){
        if(A > B){
            cout << ">" << endl;
        }
        else if(A < B){
            cout << "<" << endl;
        }
        else if(A == B){
            cout << "==" <<endl;
        }
    }
    return 0;
}