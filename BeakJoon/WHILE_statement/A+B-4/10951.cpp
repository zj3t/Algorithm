#include <iostream>
using namespace std;

int main(){
    int A,B = 0;

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    while (cin >> A >> B)
        cout << A + B << "\n";
    return 0;
}
