#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int A, B, C = 0;
    string result;

    vector<int> v(10);

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> A >> B >> C;
    
    if(A >=100 && A < 1000 && B >=100 && B < 1000 && C >=100 && C < 1000){
        result = to_string(A * B * C);

        for(int i=0; i<result.length(); i++){
            for(int j=48; j<58; j++){
                if(int(result[i]) == j){
                    v[j-48]++;
                    continue;
                }
            }
        }
        
        for(int i=0; i<10; i++){
            cout << v[i] << "\n";
        }
        
    }
    
    return 0;
}
