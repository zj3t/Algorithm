#include <iostream>

using namespace std;

int main(){
    int testCase = 0;
    int A, B = 0;

    cin.tie(NULL);
    ios_base::sync_with_stdio(false); //sync_with_stdio은 C++ iostream와 C언어의 stdio을 동기화시켜줌(False 해줌으로써 동기화 끊어줌)

    cin >> testCase;

    if(testCase <= 1000000){
        for(int i = 0; i < testCase; i++){
            cin >> A >> B;
            if (A,B >= 1 && A,B <= 1000)
                cout << A+B << '\n';
        }
    }
    return 0;
}