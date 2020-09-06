#include <iostream>

using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int H, M = 0;
    int time = 45;

    cin >> H >> M;

    M = M - time;
    
    if(M < 0){
        M = 60 + M;
        H = H - 1;

        if(H < 0){
            H = 24 + H;
        }
    }
    cout << H << " " << M << endl;

    return 0;
}