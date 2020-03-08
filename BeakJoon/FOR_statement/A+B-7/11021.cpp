#include <iostream>

using namespace std;

int main(){
    int testCase = 0;
    int A, B = 0;

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> testCase;

    for(int i = 1; i <= testCase; i++){
        cin >> A >> B;
        if (A,B > 0 && A,B < 10)
            cout << "Case #"<< i <<": " << A+B << "\n";
    }
    return 0;
}