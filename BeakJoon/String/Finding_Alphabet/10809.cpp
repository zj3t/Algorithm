#include <iostream>
#include <vector>

using namespace std;

int main(){
    string S;
    vector<int> S_result;
    bool check_bit = false;

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> S;
    
    if(S.length() <= 100){
        for(int i = 0x61; i <= 0x7A; i++){
            for(int j = 0; j <= S.length(); j++){
                check_bit = false;

                if(i == (int)S[j]){
                    S_result.push_back(j);
                    check_bit = true;
                    break;
                }
            }
            if(check_bit == false){
                S_result.push_back(-1);
            }
        }
        for(int i = 0; i<= 0x7A-0x61; i++){
            cout << S_result[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}