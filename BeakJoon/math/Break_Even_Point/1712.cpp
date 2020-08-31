#include <iostream>
using namespace std;

int main(){
    unsigned int A,B,C = 0;
    int Break_Event_Point = 0;

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> A >> B >> C;

    if(B >= C)
        Break_Event_Point = -1;
    else
        Break_Event_Point = A/(C-B) + 1;

    cout << Break_Event_Point << "\n";
    return 0;
}