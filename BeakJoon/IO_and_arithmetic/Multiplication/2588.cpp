#include <iostream>

using namespace std;

int main(){
    int A,B,C = 0;
    int result = 0;

    cin >> A >> B;

    if(A >= 100 && A <= 999 && B >= 100 && B<= 999){
        result = B / 1;
        result = result % 10;
        result = A * result;
        cout << result << endl;
        result = B / 10;
        result = result % 10;
        result = A * result;
        cout << result << endl;
        result = B / 100;
        result = result % 10;
        result = A * result;
        cout << result << endl; 
        result = A*B;
        cout << result << endl;    
    }
}
