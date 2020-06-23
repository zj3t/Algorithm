#include <iostream>
#include <vector>
#include <stack>
#include <string>

using namespace std;

int main(){
    string croatia_alphabet;   
    int index = 0;
    stack<string> s;

    s.push("c=");
    s.push("c-");
    s.push("d-");
    s.push("lj");
    s.push("nj");
    s.push("s=");
    s.push("z=");
    s.push("dz="); // 먼저해야함, "z="가 먼저 와버리면 "dz="에서 "d"만 남음

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> croatia_alphabet;
    
    while(!s.empty()){
        index = croatia_alphabet.find(s.top());
        //cout << s.top() << endl;
        //cout << index << endl;
        if(index == string::npos){
            s.pop();
            continue;
        }
        croatia_alphabet.replace(index, s.top().size(), "*");
    }
    //cout << croatia_alphabet <<endl;
    cout << croatia_alphabet.length() <<endl;
    return 0;
}
