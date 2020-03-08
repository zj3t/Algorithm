#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N,X=0;
    
    cin >> N >> X;

    if ( N,X >= 1 && N,X <= 10000){
        vector<int> v(N);

        for(int i = 0; i < N; i++){
            cin >> v[i];
        }
        for(int j=0; j < N; j++){
            if(v[j] < X){
                cout << v[j] << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}