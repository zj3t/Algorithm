#include <iostream>

using namespace std;

int main(){
    int n = 0;
    int sum = 0;

    cin >> n;

    if (n >= 1 && n <= 10000){
        for(int i = 1; i <= n; i++){
            sum += i;
        }
        cout << sum << endl;
    }
    return 0;
}