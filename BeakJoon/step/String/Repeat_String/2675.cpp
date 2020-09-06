#include <iostream>
#include <vector>

using namespace std;

int main(){
    int T = 0;
    int R = 0;
    string S;

    cin >> T;

    if(1<=T && T<=1000){
        for(int count=0; count <T; count++){
            vector<char> result;
            cin >> R >> S;

            for(int i=0; i<S.length(); i++){
                for(int j=0; j<R; j++){
                     result.push_back(S[i]);
                }
            }
            for(int i=0; i<result.size(); i++){
                cout << result[i];
            }
            cout <<"\n";
        }
    }
    return 0;
}