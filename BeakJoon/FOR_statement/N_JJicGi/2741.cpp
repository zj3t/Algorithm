#include <iostream>

using namespace std;

int main(){
    int n = 0;
    int sum = 0;

    cin.tie(NULL);
    ios_base::sync_with_stdio(false); //sync_with_stdio은 C++ iostream와 C언어의 stdio을 동기화시켜줌(False 해줌으로써 동기화 끊어줌)

    cin >> n;

    if (n >= 1 && n <= 100000){
        for(int i = 1; i <= n; i++){
            cout << i << "\n";
        }
    }
    return 0;
}