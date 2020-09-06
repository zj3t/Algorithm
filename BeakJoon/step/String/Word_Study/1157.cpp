#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    string word = "";
    vector<int> alpha(26);
    vector<int> tmp(26);


    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> word;
    if(word.length() <= 1000000){
        for(int i=0; i < word.length(); i++){
            alpha[int(toupper(word[i])) - 0x41]++;
            tmp[int(toupper(word[i])) - 0x41]++;
        }

        sort(tmp.begin(), tmp.end());

        if(tmp[25] == tmp[24]){
            cout << "?" << "\n";
        }
        else{
            for(int i=0; i < 26; i++){
                if(alpha[i] == tmp[25]){
                    cout << char(i+0x41) << "\n";
                }
            }
        }
        //nth_element(alpha.begin(), alpha.begin(), alpha.end(), greater<int>());

    }
    return 0;
}