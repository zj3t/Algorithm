#include <iostream>
using namespace std;

int main(){
    int A,B = 0;

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    if (A,B >= 0 && A,B <10){
        while (true){
            cin >> A >> B;
            if(A == 0 && B == 0){
                break;
            }
            cout << A + B << "\n";
        }
    }
}
