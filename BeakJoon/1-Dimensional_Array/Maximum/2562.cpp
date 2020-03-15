#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int N = 9;
    int value = 0;
    int max, index = 0;
    vector<int> v(9);

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    for(int i = 0; i < N; i++){
        cin >> value;
        if(value > 0 && value < 100){
            v[i] = value;
        }
    }
    max = *max_element(v.begin(), v.end());
    
    for(int i = 0; i < N; i++){
        if(v[i] == max){
            index = i+1;
        }
    }
    
    cout << max << "\n";
    cout << index << "\n";

    return 0;

}