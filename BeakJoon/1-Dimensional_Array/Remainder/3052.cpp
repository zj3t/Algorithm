#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v(10);
    vector<int> remainder(41);
    int count = 0;

    for(int i=0; i<10; i++){
        cin >> v[i];

        if(v[i] < 1000 && v[i] > 0){
            for(int j=0; j<42; j++){
                if(v[i] % 42 == j){
                    remainder[j]++;
                    continue;
                }
            }
        }
    }
    for(int i=0; i<42; i++){
        if(remainder[i] != 0){
            count ++;
        }
    }
    cout << count << "\n";

    return 0;
}