#include <iostream>

using namespace std;

int Quadrant(int X, int Y){
    if(X < 0){
        if(Y < 0){
            return 3;
        }
        else if(Y > 0){
            return 2;
        }
    }
    if(X > 0){
        if(Y < 0){
            return 4;
        }
        else if(Y > 0){
            return 1;
        }
    }    
}
int main(){
    int x, y = 0;
    int quadrant = 0;

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    cin >> x;
    cin >> y;

    if((-1000 <= x && x <= 1000 && x != 0) && (-1000 <= y && y <= 1000 && y != 0)){
        quadrant = Quadrant(x,y);

        cout << quadrant << "\n";
    }
}