#include <vector>

long long sum(std::vector<int> &a){
    long long result = 0;

    if ((a.size() <= 3000000) && (a.size() >= 1)){
        for (int i=0; i<a.size(); i++){
            if(0<= a[i] && a[i] <= 1000000)
                result += a[i];
         }
    }
    return result;
}

/*
int main(){
    vector <int> value;

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    value.push_back(1);
    value.push_back(2);
    value.push_back(3);

    cout << sum(value) << endl;

    return 0;
}
*/