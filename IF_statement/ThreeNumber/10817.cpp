#include <iostream>

using namespace std;

int main(){
    int A, B, C = 0;
    int maxValue, minValue = 0;
    int result = 0;

    cin >> A >> B >> C;

    if(A,B,C <= 100 && A,B,C >= 1){
        maxValue = max(A, B);
        maxValue = max(maxValue, C);

        if(maxValue == A){
            if(B >= C){
                result = B;
            }
            else{
                result = C;
            }
        }
        else if(maxValue == B){
            if(A >= C){
                result = A;
            }
            else{
                result = C;
            }
        }
        else if(maxValue == C){
            if(A >= B){
                result = A;
            }
            else{
                result = B;
            }
        }
        cout << result << endl;
    }
    return 0;
}