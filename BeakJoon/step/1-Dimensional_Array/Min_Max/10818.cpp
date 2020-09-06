#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N = 0;
    int value = 0;
    int min, max = 0;

    vector<int> v;

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N;

    if(N >= 1 && N <= 1000000){
        for(int i=0; i < N; i++){
            cin >> value;
            v.push_back(value);
        }

        min = *min_element(v.begin(), v.end());
        max = *max_element(v.begin(), v.end());

        cout << min << " " << max << "\n";
    }

    return 0;
}
