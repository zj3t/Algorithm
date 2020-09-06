#include <iostream>
#include <vector>

using namespace std;

void gugudan(int dan){
    vector<int> v;
    
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);

    for(auto &itr : v){
        cout << dan << " * " << itr << " = " << dan*itr << endl;
    }
}
int main(){
    int DAN = 0;

    cin >> DAN;
    if(DAN >= 1 && DAN <= 9){
        gugudan(DAN);
    }
    return 0;
}